int main() {
	//dataType Name = value;
	char alpha;
	int diff = 32;
	scanf("%c", &alpha);
	if('A' <= alpha && alpha <= 'Z') {
		printf("%c", alpha + diff);
	}

	else if('a' <= alpha && alpha <= 'z')
	{
		printf("%c", alpha - diff);
	}
	return 0;
}
