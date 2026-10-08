struct __declspec(align(2)) emf_in_wmf_comment
{
DWORD magic;
WORD unk04;
WORD unk06;
WORD unk08;
WORD unk0a;
WORD checksum;
__unaligned __declspec(align(1)) DWORD unk0e;
__unaligned __declspec(align(1)) DWORD num_chunks;
__unaligned __declspec(align(1)) DWORD chunk_size;
__unaligned __declspec(align(1)) DWORD remaining_size;
__unaligned __declspec(align(1)) DWORD emf_size;
BYTE emf_data[1];
};
