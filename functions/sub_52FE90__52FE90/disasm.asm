0x52FE90: push    0FFFFFFFFh
0x52FE92: push    offset SEH_6E16A0
0x52FE97: mov     eax, large fs:0
0x52FE9D: push    eax
0x52FE9E: sub     esp, 10h
0x52FEA1: push    ebx
0x52FEA2: push    ebp
0x52FEA3: push    esi
0x52FEA4: push    edi
0x52FEA5: mov     eax, ds:0B30AACh
0x52FEAA: xor     eax, esp
0x52FEAC: push    eax
0x52FEAD: lea     eax, [esp+30h+var_C]
0x52FEB1: mov     large fs:0, eax
0x52FEB7: xor     ebx, ebx
0x52FEB9: xor     eax, eax
0x52FEBB: mov     [esp+30h+var_1C], eax
0x52FEBF: nop
0x52FEC0: cmp     ds:0B110F4h[eax*4], ebx
0x52FEC7: lea     ecx, ds:0B110F4h[eax*4]
0x52FECE: mov     [esp+30h+var_18], ebx
0x52FED2: mov     [esp+30h+var_14], ecx
0x52FED6: jle     loc_52FFF5
0x52FEDC: lea     ebp, ds:0B111B8h[eax*4]
0x52FEE3: xor     edi, edi
0x52FEE5: jmp     short loc_52FEF0
0x52FEE7: align 10h
0x52FEF0: mov     edx, [ebp+0]
0x52FEF3: cmp     [edi+edx], ebx
0x52FEF6: jnz     loc_52FFDF
0x52FEFC: push    3Ch ; '<'; Size
0x52FEFE: call    FormHeapAlloc
0x52FF03: mov     esi, eax
0x52FF05: add     esp, 4
0x52FF08: mov     [esp+30h+var_10], esi
0x52FF0C: cmp     esi, ebx
0x52FF0E: mov     [esp+30h+var_4], ebx
0x52FF12: jz      short loc_52FF5B
0x52FF14: mov     ecx, esi
0x52FF16: call    TESForm_constr
0x52FF1B: mov     al, byte ptr [esp+30h+var_1C]
0x52FF1F: mov     dword ptr [esi+18h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x52FF26: mov     [esi+1Ch], ebx
0x52FF29: mov     [esi+20h], bx
0x52FF2D: mov     [esi+22h], bx
0x52FF31: mov     dword ptr [esi], offset ??_7TESTopic@@6BTESTopic@@@; const TESTopic::`vftable'{for `TESTopic'}
0x52FF37: mov     dword ptr [esi+18h], offset ??_7TESTopic@@6BTESFullName@@@; const TESTopic::`vftable'{for `TESFullName'}
0x52FF3E: mov     [esi+28h], ebx
0x52FF41: mov     [esi+2Ch], ebx
0x52FF44: mov     [esi+34h], ebx
0x52FF47: mov     [esi+38h], bx
0x52FF4B: mov     [esi+3Ah], bx
0x52FF4F: mov     [esi+30h], ebx
0x52FF52: mov     [esi+24h], al
0x52FF55: mov     byte ptr [esi+4], 39h ; '9'
0x52FF59: jmp     short loc_52FF5D
0x52FF5B: xor     esi, esi
0x52FF5D: mov     ecx, [ebp+0]
0x52FF60: mov     [edi+ecx], esi
0x52FF63: mov     edx, [ebp+0]
0x52FF66: mov     ecx, [edx+edi+4]
0x52FF6A: lea     eax, [edx+edi]
0x52FF6D: push    1; a3
0x52FF6F: push    ecx; a2
0x52FF70: mov     ecx, [eax]; this
0x52FF72: mov     [esp+38h+var_4], 0FFFFFFFFh
0x52FF7A: call    TESForm_SetFormID
0x52FF7F: mov     edx, [ebp+0]
0x52FF82: mov     ecx, [edx+edi]
0x52FF85: lea     eax, [edx+edi]
0x52FF88: mov     edx, [ecx]
0x52FF8A: mov     ecx, [eax+8]
0x52FF8D: mov     edx, [edx+0D8h]
0x52FF93: push    ecx
0x52FF94: mov     ecx, [eax]
0x52FF96: call    edx
0x52FF98: mov     eax, [ebp+0]
0x52FF9B: mov     ecx, [eax+edi+8]
0x52FF9F: add     eax, edi
0x52FFA1: push    ebx; a3
0x52FFA2: push    ecx; a2
0x52FFA3: mov     ecx, [eax]
0x52FFA5: add     ecx, 1Ch; this
0x52FFA8: call    BSStringT_Set
0x52FFAD: mov     edx, [ebp+0]
0x52FFB0: mov     eax, [edx+edi]
0x52FFB3: mov     ecx, ds:0B33A98h
0x52FFB9: push    eax
0x52FFBA: call    sub_447530
0x52FFBF: mov     ecx, [ebp+0]
0x52FFC2: mov     edx, [ecx+edi]
0x52FFC5: lea     eax, [ecx+edi]
0x52FFC8: mov     eax, [eax+8]
0x52FFCB: push    edx
0x52FFCC: push    eax
0x52FFCD: mov     ecx, offset off_B06164
0x52FFD2: call    sub_412D30
0x52FFD7: mov     eax, [esp+30h+var_1C]
0x52FFDB: mov     ecx, [esp+30h+var_14]
0x52FFDF: mov     edx, [esp+30h+var_18]
0x52FFE3: add     edx, 1
0x52FFE6: add     edi, 0Ch
0x52FFE9: cmp     edx, [ecx]
0x52FFEB: mov     [esp+30h+var_18], edx
0x52FFEF: jl      loc_52FEF0
0x52FFF5: add     eax, 1
0x52FFF8: cmp     eax, 7
0x52FFFB: mov     [esp+30h+var_1C], eax
0x52FFFF: jl      loc_52FEC0
0x530005: mov     ecx, dword ptr [esp+30h+var_C]
0x530009: mov     large fs:0, ecx
0x530010: pop     ecx
0x530011: pop     edi
0x530012: pop     esi
0x530013: pop     ebp
0x530014: pop     ebx
0x530015: add     esp, 1Ch
0x530018: retn
