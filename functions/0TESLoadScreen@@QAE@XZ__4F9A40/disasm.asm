0x4F9A40: push    0FFFFFFFFh
0x4F9A42: push    offset ??0TESLoadScreen@@QAE@XZ_SEH
0x4F9A47: mov     eax, large fs:0
0x4F9A4D: push    eax
0x4F9A4E: push    ecx
0x4F9A4F: push    ebx
0x4F9A50: push    ebp
0x4F9A51: push    esi
0x4F9A52: push    edi
0x4F9A53: mov     eax, ds:0B30AACh
0x4F9A58: xor     eax, esp
0x4F9A5A: push    eax
0x4F9A5B: lea     eax, [esp+24h+var_C]
0x4F9A5F: mov     large fs:0, eax
0x4F9A65: mov     esi, ecx
0x4F9A67: mov     [esp+24h+var_10], esi
0x4F9A6B: call    TESForm_constr
0x4F9A70: lea     edi, [esi+18h]
0x4F9A73: xor     ebp, ebp
0x4F9A75: mov     ecx, edi
0x4F9A77: mov     [esp+24h+var_4], ebp
0x4F9A7B: call    TESTexture_constr
0x4F9A80: lea     ebx, [esi+24h]
0x4F9A83: mov     ecx, ebx
0x4F9A85: mov     byte ptr [esp+24h+var_4], 1
0x4F9A8A: call    TESDescription_constr
0x4F9A8F: mov     dword ptr [esi], offset ??_7TESLoadScreen@@6BTESLoadScreen@@@; const TESLoadScreen::`vftable'{for `TESLoadScreen'}
0x4F9A95: mov     dword ptr [edi], offset ??_7TESLoadScreen@@6BTESTexture@@@; const TESLoadScreen::`vftable'{for `TESTexture'}
0x4F9A9B: mov     dword ptr [ebx], offset ??_7TESLoadScreen@@6BTESDescription@@@; const TESLoadScreen::`vftable'{for `TESDescription'}
0x4F9AA1: mov     [esi+2Ch], ebp
0x4F9AA4: mov     [esi+30h], ebp
0x4F9AA7: mov     [esi+34h], ebp
0x4F9AAA: mov     [esi+38h], bp
0x4F9AAE: mov     [esi+3Ah], bp
0x4F9AB2: push    1; a2
0x4F9AB4: mov     ecx, esi; this
0x4F9AB6: mov     byte ptr [esp+28h+var_4], 2
0x4F9ABB: mov     byte ptr [esi+4], 3Fh ; '?'
0x4F9ABF: call    TESForm_SetIsLinked
0x4F9AC4: mov     eax, esi
0x4F9AC6: mov     ecx, [esp+24h+var_C]
0x4F9ACA: mov     large fs:0, ecx
0x4F9AD1: pop     ecx
0x4F9AD2: pop     edi
0x4F9AD3: pop     esi
0x4F9AD4: pop     ebp
0x4F9AD5: pop     ebx
0x4F9AD6: add     esp, 10h
0x4F9AD9: retn
