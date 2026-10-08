struct files_callback_info
{
HSPFILEQ queue __offset(OFF64|AUTO);
PCWSTR src_root __offset(OFF64|AUTO);
UINT copy_flags;
HINF layout __offset(OFF64|AUTO);
};
