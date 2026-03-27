0x7DAF50: push    0FFFFFFFFh
0x7DAF52: push    offset SEH_8C8970
0x7DAF57: mov     eax, large fs:0
0x7DAF5D: push    eax
0x7DAF5E: push    ecx
0x7DAF5F: push    esi
0x7DAF60: push    edi
0x7DAF61: mov     eax, ds:0B30AACh
0x7DAF66: xor     eax, esp
0x7DAF68: push    eax
0x7DAF69: lea     eax, [esp+1Ch+var_C]
0x7DAF6D: mov     large fs:0, eax
0x7DAF73: mov     esi, ecx
0x7DAF75: push    108h; Size
0x7DAF7A: call    FormHeapAlloc
0x7DAF7F: add     esp, 4
0x7DAF82: mov     [esp+1Ch+var_10], eax
0x7DAF86: test    eax, eax
0x7DAF88: mov     [esp+1Ch+var_4], 0
0x7DAF90: jz      short loc_7DAFAA
0x7DAF92: mov     ecx, [esp+1Ch+Size]
0x7DAF96: mov     edx, [esp+1Ch+Src]
0x7DAF9A: push    ecx; Size
0x7DAF9B: mov     ecx, [esp+20h+arg_0]
0x7DAF9F: push    edx; Src
0x7DAFA0: push    ecx; int
0x7DAFA1: mov     ecx, eax
0x7DAFA3: call    sub_7DAB00
0x7DAFA8: jmp     short loc_7DAFAC
0x7DAFAA: xor     eax, eax
0x7DAFAC: movzx   edi, word ptr [esi+0Ah]
0x7DAFB0: movzx   edx, word ptr [esi+8]
0x7DAFB4: cmp     edi, edx
0x7DAFB6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7DAFBE: mov     [esp+1Ch+Size], eax
0x7DAFC2: jb      short loc_7DAFD2
0x7DAFC4: movzx   eax, word ptr [esi+0Eh]
0x7DAFC8: add     eax, edi
0x7DAFCA: push    eax
0x7DAFCB: mov     ecx, esi
0x7DAFCD: call    NiTArray_SetSize
0x7DAFD2: lea     ecx, [esp+1Ch+Size]
0x7DAFD6: push    ecx
0x7DAFD7: push    edi
0x7DAFD8: mov     ecx, esi
0x7DAFDA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7DAFDF: mov     ecx, [esp+1Ch+var_C]
0x7DAFE3: mov     large fs:0, ecx
0x7DAFEA: pop     ecx
0x7DAFEB: pop     edi
0x7DAFEC: pop     esi
0x7DAFED: add     esp, 10h
0x7DAFF0: retn    0Ch
