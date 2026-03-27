0x74DDA0: push    esi
0x74DDA1: mov     esi, ecx
0x74DDA3: mov     ecx, [esi+1Ch]
0x74DDA6: test    ecx, ecx
0x74DDA8: mov     dword ptr [esi+18h], offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTArray<NiPointer<NiAVObject>>::`vftable'
0x74DDAF: jz      short loc_74DDB8
0x74DDB1: push    3
0x74DDB3: call    sub_4027F0
0x74DDB8: mov     ecx, esi; this
0x74DDBA: call    ??1NiPSysFieldModifier@@UAE@XZ; NiPSysFieldModifier::~NiPSysFieldModifier(void)
0x74DDBF: test    [esp+4+arg_0], 1
0x74DDC4: jz      short loc_74DDCF
0x74DDC6: push    esi
0x74DDC7: call    FormHeapFree
0x74DDCC: add     esp, 4
0x74DDCF: mov     eax, esi
0x74DDD1: pop     esi
0x74DDD2: retn    4
