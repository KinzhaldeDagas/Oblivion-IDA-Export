0x431130: mov     eax, [esp+arg_C]
0x431134: mov     ecx, [esp+arg_8]
0x431138: mov     edx, [esp+arg_4]
0x43113C: push    esi
0x43113D: push    eax
0x43113E: mov     eax, [esp+8+arg_0]
0x431142: push    ecx
0x431143: push    edx
0x431144: push    eax
0x431145: call    FileFinder_LoadNiFile??
0x43114A: push    0; int
0x43114C: push    offset ??_R0?AVBSFile@@@8; struct TypeDescriptor *
0x431151: push    offset ??_R0?AVNiFile@@@8; struct _s_RTTICompleteObjectLocator *
0x431156: mov     esi, eax
0x431158: push    0; int
0x43115A: push    esi; void *
0x43115B: call    OblivionDynamicCast
0x431160: add     esp, 24h
0x431163: test    eax, eax
0x431165: jnz     short loc_431177
0x431167: test    esi, esi
0x431169: jz      short loc_431175
0x43116B: mov     edx, [esi]
0x43116D: mov     eax, [edx]
0x43116F: push    1
0x431171: mov     ecx, esi
0x431173: call    eax
0x431175: xor     eax, eax
0x431177: pop     esi
0x431178: retn
