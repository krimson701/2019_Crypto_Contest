#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main() {
	int arr[160] = { 0, };
	int brr[160] = { 0, };
	string a="UnicOde iS a CompUtInG industRy stanDArD for ConsiStent Encoding,RepresenTation, And hanDlinG of ALL tEXT. UsinG UNIcodE, ALL HAngUl sYllAbles CAN BE ExpRessed by 16-Bit datA bEtween 0Xac00 and 0xd7aF";
	string b = "eXcluSiVe oR (XoR) IS a LOGiCaL opeRAtiOn THAt RESuLTS TruE onLY whEn iNpuTs diffER (one iS TRuE, The oThEr Is FALSE). iT Is oFTEn UsEd foR bitWiSe DyADIc OPERatIonS. (0 Xor 0) = 0, (1 Xor 1) = 0, (1 Xor 0) = 1, AnD (0 xor 1) = 1 ARe estABLisHeD";
	int i = 0;
	int idx = 0;
	while (i<a.length()) {
		if (65 <= (int)a[i] && (int)a[i] <= 90)
			arr[idx++] = 1;
		else if (97 <= (int)a[i]&& (int)a[i] <= 122)
			arr[idx++] = 0;
		i++;
	}
	i = 0;
	idx = 0;
	while (i<b.length()) {
		if (65 <= (int)b[i] && (int)b[i] <= 90)
			brr[idx++] = 1;
		else if (97 <= (int)b[i]&& (int)b[i] <= 122)
			brr[idx++] = 0;
		i++;
	}
	for (i = 0; i < 160; i++) {
		arr[i] = arr[i] ^ brr[i];
	}
	for (i = 0; i < 160; i++) {
		if (i % 16 == 0)
			printf("\n");
		if (i % 4 == 0)
			printf(" ");
		printf("%d", arr[i]);
	}
	
}

/*
��� �ѱ� ������ 16��Ʈ �����ͷ� ǥ���� �� �ִ� (0xAC00 �� 0xD7AF ������)
UnicOde iS a CompUtInG industRy stanDArD for ConsiStent Encoding, RepresenTation, And hanDlinG of ALL tEXT. UsinG UNIcodE, ALL HAngUl sYllAbles CAN BE ExpRessed by 16-Bit datA bEtween 0Xac00 and 0xd7aF.

&#x0055;&#x006E;&#x0069;&#x0063;&#x004F;&#x0064;&#x0065;
&#x0065;&#x0058;&#x0063;&#x006C;&#x0075;&#x0053;&#x0069;

�빮�ڴ� 1 �ҹ��ڴ� 0 �׷��� ������ �Ʒ����� 160��Ʈ���� xor �ϸ� 160��Ʈ¥������
�װ� �����ڵ�� ��ȯ�ϸ� "�����մϴ������Դϴ�"����....��

1100 1101 1001 0101 1101 0101 0101 1000 : ����
1101 0101 0110 1001 1011 0010 1100 1000 : �մ�
1011 0010 1110 0100 1100 1000 0001 0101 : ����
1011 0010 1111 0101 1100 0111 1000 0101 : ����
1011 0010 1100 1000 1011 0010 1110 0100 : �ϴ٤�...
*/