struct rgb_lookup_colortable_ctx
{
const dib_info *dib __offset(OFF64|AUTO);
BYTE map[32768];
BYTE valid[4096];
};
