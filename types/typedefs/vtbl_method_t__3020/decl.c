struct vtbl_method_t
{
BYTE mov1[4];
BYTE mov2[3];
BYTE jmp[2];
__unaligned __declspec(align(1)) DWORD offset;
BYTE pad[3];
};
