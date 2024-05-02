#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QFrame>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QValidator>
#include <QApplication>
#include <QLabel>
#include <QLayout>
#include <QMessageBox>

class Widget :public QWidget // ����� ����
{
	Q_OBJECT // ������ Qt, �������������� ���������� �������� �������� � ������
protected:
	QFrame* frame; // �����
	QLabel* inputLabel; // ����� �����
	QLineEdit* inputEdit; // �������� �������� �����
	QLabel* outputLabel; // ����� ������
	QLineEdit* outputEdit; // �������� �������� ������
	QPushButton* nextButton; // ������ ���������
	QPushButton* exitButton; // ������ �����
public:
	Widget(QWidget* parent = 0); // �����������
public slots:
	void begin(); // ����� ��������� ��������� ����������
	void calc(); // ����� ���������� ����������
};
class StrValidator :public QValidator // ����� ���������� �������� �����
{
public:
	StrValidator(QObject* parent) :QValidator(parent) {}
	virtual State validate(QString& str, int& pos) const
	{
		return Acceptable; // ����� ������ ��������� �������� ������
	}
};

#endif // WIDGET_H