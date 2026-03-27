0x47CCE0: fldz
0x47CCE2: sub     esp, 8
0x47CCE5: push    ebx
0x47CCE6: mov     ebx, ecx
0x47CCE8: fcomp   dword ptr [ebx+0DCh]
0x47CCEE: push    edi
0x47CCEF: fnstsw  ax
0x47CCF1: fld     [esp+10h+arg_0]
0x47CCF5: test    ah, 44h
0x47CCF8: jnp     short loc_47CD04
0x47CCFA: fld     st
0x47CCFC: fsub    dword ptr [ebx+0DCh]
0x47CD02: jmp     short loc_47CD0A
0x47CD04: fld     dword ptr [ebx+0DCh]
0x47CD0A: movzx   edi, word ptr [ebx+0B6h]
0x47CD11: fxch    st(1)
0x47CD13: test    edi, edi
0x47CD15: fstp    dword ptr [ebx+0DCh]
0x47CD1B: fstp    [esp+10h+arg_0]
0x47CD1F: jz      loc_47CDF4
0x47CD25: push    ebp
0x47CD26: mov     ebp, ds:0A2807Ch
0x47CD2C: push    esi
0x47CD2D: lea     ecx, [ecx+0]
0x47CD30: movzx   eax, word ptr [ebx+0B6h]
0x47CD37: sub     edi, 1
0x47CD3A: cmp     eax, edi
0x47CD3C: jbe     loc_47CDEA
0x47CD42: mov     ecx, [ebx+0B0h]
0x47CD48: mov     esi, [ecx+edi*4]
0x47CD4B: test    esi, esi
0x47CD4D: jz      loc_47CDEA
0x47CD53: mov     edx, [esi]
0x47CD55: mov     eax, [edx+4]
0x47CD58: mov     ecx, esi
0x47CD5A: call    eax
0x47CD5C: test    eax, eax
0x47CD5E: jz      short loc_47CD72
0x47CD60: cmp     eax, offset unk_B33E88
0x47CD65: jz      loc_47CDFC
0x47CD6B: mov     eax, [eax+4]
0x47CD6E: test    eax, eax
0x47CD70: jnz     short loc_47CD60
0x47CD72: xor     al, al
0x47CD74: neg     al
0x47CD76: sbb     eax, eax
0x47CD78: and     eax, esi
0x47CD7A: mov     ecx, eax
0x47CD7C: jz      short loc_47CDEA
0x47CD7E: fld     dword ptr [ecx+0DCh]
0x47CD84: fsub    [esp+18h+arg_0]
0x47CD88: fstp    [esp+18h+var_8]
0x47CD8C: fld     [esp+18h+var_8]
0x47CD90: fst     dword ptr [ecx+0DCh]
0x47CD96: fldz
0x47CD98: fcom    st(1)
0x47CD9A: fnstsw  ax
0x47CD9C: fstp    st(1)
0x47CD9E: test    ah, 41h
0x47CDA1: jnz     short loc_47CDA9
0x47CDA3: fst     dword ptr [ecx+0DCh]
0x47CDA9: fcomp   dword ptr [ecx+0DCh]
0x47CDAF: fnstsw  ax
0x47CDB1: test    ah, 44h
0x47CDB4: jp      short loc_47CDEA
0x47CDB6: mov     edx, [ebx]
0x47CDB8: mov     edx, [edx+8Ch]
0x47CDBE: push    edi
0x47CDBF: lea     eax, [esp+1Ch+var_4]
0x47CDC3: push    eax
0x47CDC4: mov     ecx, ebx
0x47CDC6: call    edx
0x47CDC8: mov     eax, dword ptr [esp+18h+var_4]
0x47CDCC: test    eax, eax
0x47CDCE: jz      short loc_47CDEA
0x47CDD0: mov     esi, eax
0x47CDD2: add     eax, 4
0x47CDD5: push    eax; lpAddend
0x47CDD6: call    ebp ; InterlockedDecrement
0x47CDD8: test    eax, eax
0x47CDDA: jnz     short loc_47CDEA
0x47CDDC: test    esi, esi
0x47CDDE: jz      short loc_47CDEA
0x47CDE0: mov     eax, [esi]
0x47CDE2: mov     edx, [eax]
0x47CDE4: push    1
0x47CDE6: mov     ecx, esi
0x47CDE8: call    edx
0x47CDEA: test    edi, edi
0x47CDEC: jnz     loc_47CD30
0x47CDF2: pop     esi
0x47CDF3: pop     ebp
0x47CDF4: pop     edi
0x47CDF5: pop     ebx
0x47CDF6: add     esp, 8
0x47CDF9: retn    4
0x47CDFC: mov     al, 1
0x47CDFE: jmp     loc_47CD74
