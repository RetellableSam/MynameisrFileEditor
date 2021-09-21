#include <stdio.h>
int main() {
	FILE * writetable;
	writetable = fopen(file6data.c, "w");
        fprintf(writetable, "#include <stdio.h>\n");
        fprintf(writetable, "#include <string.h>\n");
        fprintf(writetable, "#include <stdlib.h>\n");
        fprintf(writetable, "int conten6(void) {\n");
        fprintf(writetable, "   char file6[50] = \"");
        fprintf(writetable, "%s", filename);
        fprintf(writetable, "\";\n  printf(\"File 6: \");\n   printf(\"\%%s\", file6);");
        fprintf(writetable, "\n}");
}
