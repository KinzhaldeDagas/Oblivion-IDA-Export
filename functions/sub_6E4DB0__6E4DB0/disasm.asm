0x6E4DB0: push    0FFFFFFFFh
0x6E4DB2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x6E4DB7: mov     eax, large fs:0
0x6E4DBD: push    eax
0x6E4DBE: push    ecx
0x6E4DBF: push    ebx
0x6E4DC0: push    ebp
0x6E4DC1: push    esi
0x6E4DC2: push    edi
0x6E4DC3: mov     eax, ds:0B30AACh
0x6E4DC8: xor     eax, esp
0x6E4DCA: push    eax
0x6E4DCB: lea     eax, [esp+24h+var_C]
0x6E4DCF: mov     large fs:0, eax
0x6E4DD5: mov     ebp, ecx
0x6E4DD7: push    48h ; 'H'; Size
0x6E4DD9: call    FormHeapAlloc
0x6E4DDE: add     esp, 4
0x6E4DE1: mov     [esp+24h+var_10], eax
0x6E4DE5: xor     ebx, ebx
0x6E4DE7: cmp     eax, ebx
0x6E4DE9: mov     [esp+24h+var_4], ebx
0x6E4DED: jz      short loc_6E4E09
0x6E4DEF: push    ebx; int
0x6E4DF0: push    0FFFFh; int
0x6E4DF5: push    0FFFFh; int
0x6E4DFA: push    0FFFFh; int
0x6E4DFF: push    ebx; int
0x6E4E00: mov     ecx, eax; this
0x6E4E02: call    sub_6E4930
0x6E4E07: mov     ebx, eax
0x6E4E09: mov     eax, [esp+24h+arg_0]
0x6E4E0D: push    eax
0x6E4E0E: push    ebx
0x6E4E0F: mov     ecx, ebp
0x6E4E11: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x6E4E19: call    sub_6ED2B0
0x6E4E1E: lea     esi, [ebp+1Ch]
0x6E4E21: lea     edi, [ebx+1Ch]
0x6E4E24: mov     ecx, 8
0x6E4E29: rep movsd
0x6E4E2B: mov     ecx, [ebp+3Ch]
0x6E4E2E: mov     [ebx+3Ch], ecx
0x6E4E31: mov     edx, [ebp+40h]
0x6E4E34: mov     [ebx+40h], edx
0x6E4E37: mov     eax, [ebp+44h]
0x6E4E3A: mov     [ebx+44h], eax
0x6E4E3D: mov     eax, ebx
0x6E4E3F: mov     ecx, [esp+24h+var_C]
0x6E4E43: mov     large fs:0, ecx
0x6E4E4A: pop     ecx
0x6E4E4B: pop     edi
0x6E4E4C: pop     esi
0x6E4E4D: pop     ebp
0x6E4E4E: pop     ebx
0x6E4E4F: add     esp, 10h
0x6E4E52: retn    4
