struct context_parameters
{
ULONG arch_flag;
ULONG supported_flags;
ULONG context_size;
ULONG legacy_size;
ULONG context_ex_size;
ULONG alignment;
ULONG true_alignment;
ULONG flags_offset;
const context_copy_range *copy_ranges __offset(OFF64|AUTO);
};
