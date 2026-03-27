0x6FFD70: push    0FFFFFFFFh
0x6FFD72: push    offset ??1NiDitherProperty@@UAE@XZ_SEH
0x6FFD77: mov     eax, large fs:0
0x6FFD7D: push    eax
0x6FFD7E: push    ecx
0x6FFD7F: push    esi
0x6FFD80: push    edi
0x6FFD81: mov     eax, ds:0B30AACh
0x6FFD86: xor     eax, esp
0x6FFD88: push    eax
0x6FFD89: lea     eax, [esp+1Ch+var_C]
0x6FFD8D: mov     large fs:0, eax
0x6FFD93: mov     esi, ecx
0x6FFD95: mov     [esp+1Ch+var_10], esi
0x6FFD99: mov     dword ptr [esi], offset ??_7NiObjectNET@@6B@; const NiObjectNET::`vftable'
0x6FFD9F: mov     eax, [esi+8]
0x6FFDA2: push    eax
0x6FFDA3: mov     [esp+20h+var_4], 1
0x6FFDAB: call    FormHeapFree
0x6FFDB0: add     esp, 4
0x6FFDB3: mov     ecx, esi
0x6FFDB5: call    sub_6FFC60
0x6FFDBA: mov     edi, [esi+0Ch]
0x6FFDBD: test    edi, edi
0x6FFDBF: mov     byte ptr [esp+1Ch+var_4], 0
0x6FFDC4: jz      short loc_6FFDE2
0x6FFDC6: lea     eax, [edi+4]
0x6FFDC9: push    eax; lpAddend
0x6FFDCA: call    dword ptr ds:0A2807Ch
0x6FFDD0: test    eax, eax
0x6FFDD2: jnz     short loc_6FFDE2
0x6FFDD4: test    edi, edi
0x6FFDD6: jz      short loc_6FFDE2
0x6FFDD8: mov     edx, [edi]
0x6FFDDA: mov     eax, [edx]
0x6FFDDC: push    1
0x6FFDDE: mov     ecx, edi
0x6FFDE0: call    eax
0x6FFDE2: mov     ecx, esi
0x6FFDE4: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6FFDEC: call    NiRefObject_destr
0x6FFDF1: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6FFDF5: mov     large fs:0, ecx
0x6FFDFC: pop     ecx
0x6FFDFD: pop     edi
0x6FFDFE: pop     esi
0x6FFDFF: add     esp, 10h
0x6FFE02: retn
