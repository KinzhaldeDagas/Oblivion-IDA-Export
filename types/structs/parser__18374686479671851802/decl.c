struct parser
{
const WCHAR_0 *start __offset(OFF64|AUTO);
const WCHAR_0 *end __offset(OFF64|AUTO);
inf_file *file __offset(OFF64|AUTO);
parser_state state;
parser_state stack[4];
int stack_pos;
int cur_section;
line *line __offset(OFF64|AUTO);
unsigned int line_pos;
unsigned int broken_line;
unsigned int error;
unsigned int token_len;
WCHAR_0 token[512];
};
