0x577A10: push    0FFFFFFFFh
0x577A12: push    offset SEH_577A10
0x577A17: mov     eax, large fs:0
0x577A1D: push    eax
0x577A1E: push    ecx
0x577A1F: push    esi
0x577A20: mov     eax, ds:0B30AACh
0x577A25: xor     eax, esp
0x577A27: push    eax
0x577A28: lea     eax, [esp+18h+var_C]
0x577A2C: mov     large fs:0, eax
0x577A32: mov     esi, ecx
0x577A34: mov     [esp+18h+var_10], esi
0x577A38: xor     eax, eax
0x577A3A: mov     [esi+0Ch], eax
0x577A3D: mov     [esi+4], eax
0x577A40: mov     [esi+8], eax
0x577A43: mov     dword ptr [esi], offset ??_7?$NiTList@PAVTextLine@FontManager@@@@6B@; const NiTList<FontManager::TextLine *>::`vftable'
0x577A49: mov     ecx, [esp+18h+arg_8]
0x577A4D: mov     edx, [esp+18h+arg_C]
0x577A51: mov     [esi+18h], ecx
0x577A54: mov     ecx, [esp+18h+arg_0]
0x577A58: mov     [esi+1Ch], edx
0x577A5B: mov     edx, [esp+18h+arg_4]
0x577A5F: mov     [esi+38h], ecx
0x577A62: mov     [esi+14h], eax
0x577A65: push    eax
0x577A66: mov     [esi+24h], eax
0x577A69: mov     [esi+28h], eax
0x577A6C: mov     [esi+2Ch], eax
0x577A6F: mov     [esi+30h], eax
0x577A72: mov     [esi+34h], eax
0x577A75: push    edx
0x577A76: mov     ecx, esi
0x577A78: mov     [esp+20h+var_4], eax
0x577A7C: mov     dword ptr [esi+20h], 23h ; '#'
0x577A83: call    sub_577840
0x577A88: mov     eax, esi
0x577A8A: mov     ecx, [esp+18h+var_C]
0x577A8E: mov     large fs:0, ecx
0x577A95: pop     ecx
0x577A96: pop     esi
0x577A97: add     esp, 10h
0x577A9A: retn    10h
