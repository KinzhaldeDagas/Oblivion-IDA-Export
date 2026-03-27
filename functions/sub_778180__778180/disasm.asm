0x778180: push    ecx
0x778181: mov     eax, [ecx+8]
0x778184: push    0
0x778186: lea     edx, [esp+8+var_4]
0x77818A: push    edx
0x77818B: mov     edx, [esp+0Ch+arg_C]
0x77818F: push    edx
0x778190: mov     edx, [esp+10h+arg_8]
0x778194: push    edx
0x778195: mov     edx, [esp+14h+arg_4]
0x778199: push    edx
0x77819A: mov     edx, [esp+18h+arg_0]
0x77819E: mov     [esp+18h+var_4], 0
0x7781A6: mov     ecx, [eax]
0x7781A8: push    edx
0x7781A9: push    eax
0x7781AA: mov     eax, [ecx+6Ch]
0x7781AD: call    eax
0x7781AF: test    eax, eax
0x7781B1: jl      short loc_7781CE
0x7781B3: mov     ecx, [esp+4+arg_10]
0x7781B7: test    ecx, ecx
0x7781B9: mov     eax, [esp+4+var_4]
0x7781BC: jz      short loc_7781DD
0x7781BE: mov     edx, [eax]
0x7781C0: push    ecx
0x7781C1: push    eax
0x7781C2: mov     eax, [edx+34h]
0x7781C5: call    eax
0x7781C7: mov     eax, [esp+4+var_4]
0x7781CA: pop     ecx
0x7781CB: retn    14h
0x7781CE: push    offset aNidx9indexbuff; "NiDX9IndexBufferManager::CreateIndexBuf"...
0x7781D3: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7781D8: add     esp, 4
0x7781DB: xor     eax, eax
0x7781DD: pop     ecx
0x7781DE: retn    14h
