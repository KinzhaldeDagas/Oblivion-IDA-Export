0x46CDE0: push    0FFFFFFFFh
0x46CDE2: push    offset TESLeveledList_CalcLeveledForm_SEH
0x46CDE7: mov     eax, large fs:0
0x46CDED: push    eax
0x46CDEE: sub     esp, 1Ch
0x46CDF1: push    ebx
0x46CDF2: push    ebp
0x46CDF3: push    esi
0x46CDF4: push    edi
0x46CDF5: mov     eax, ds:0B30AACh
0x46CDFA: xor     eax, esp
0x46CDFC: push    eax
0x46CDFD: lea     eax, [esp+3Ch+var_C]
0x46CE01: mov     large fs:0, eax
0x46CE07: mov     ebp, ecx
0x46CE09: xor     ebx, ebx
0x46CE0B: cmp     [esp+3Ch+arg_8], ebx
0x46CE0F: jz      TESLeveledList_CalcLeveledForm___Done
0x46CE15: mov     si, word ptr [esp+3Ch+arg_4]
0x46CE1A: cmp     si, bx
0x46CE1D: jbe     TESLeveledList_CalcLeveledForm___Done
0x46CE23: test    byte ptr [ebp+0Dh], 1
0x46CE27: movzx   edi, word ptr [esp+3Ch+arg_0]
0x46CE2C: mov     [esp+3Ch+var_28], edi
0x46CE30: jz      short TESLeveledList_CalcLeveledForm___InitContainer
