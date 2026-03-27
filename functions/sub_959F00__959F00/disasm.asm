0x959F00: push    ebx
0x959F01: xor     ebx, ebx
0x959F03: cmp     ds:0BA9A65h, bl
0x959F09: jnz     loc_95A1AC
0x959F0F: push    ebp
0x959F10: push    esi
0x959F11: push    edi
0x959F12: push    offset sub_96DAE0
0x959F17: push    offset aNicollisiondat; "NiCollisionData"
0x959F1C: mov     byte ptr ds:0BA9A65h, 1
0x959F23: call    sub_712590
0x959F28: xor     ecx, ecx
0x959F2A: mov     eax, 24h ; '$'
0x959F2F: mov     edx, 4
0x959F34: mul     edx
0x959F36: seto    cl
0x959F39: mov     dword ptr ds:0BA9A8Ch, offset sub_968210
0x959F43: mov     dword ptr ds:0BA9A90h, offset sub_961350
0x959F4D: mov     dword ptr ds:0BA9A9Ch, offset sub_95F720
0x959F57: mov     dword ptr ds:0BA9A94h, offset sub_96D640
0x959F61: mov     dword ptr ds:0BA9A88h, offset sub_96CCF0
0x959F6B: mov     dword ptr ds:0BA9A98h, offset sub_95FE70
0x959F75: neg     ecx
0x959F77: or      ecx, eax
0x959F79: push    ecx; Size
0x959F7A: call    FormHeapAlloc
0x959F7F: mov     esi, eax
0x959F81: mov     eax, offset sub_95FB40
0x959F86: mov     [esi+60h], eax
0x959F89: mov     [esi+64h], eax
0x959F8C: mov     [esi+68h], eax
0x959F8F: mov     [esi+74h], eax
0x959F92: xor     ecx, ecx
0x959F94: mov     eax, 24h ; '$'
0x959F99: mov     edx, 4
0x959F9E: mul     edx
0x959FA0: seto    cl
0x959FA3: mov     dword ptr [esi], offset sub_96C550
0x959FA9: mov     [esi+4], ebx
0x959FAC: mov     [esi+8], ebx
0x959FAF: mov     [esi+0Ch], ebx
0x959FB2: mov     [esi+10h], ebx
0x959FB5: mov     [esi+14h], ebx
0x959FB8: neg     ecx
0x959FBA: or      ecx, eax
0x959FBC: push    ecx; Size
0x959FBD: mov     dword ptr [esi+18h], offset sub_9682F0
0x959FC4: mov     dword ptr [esi+1Ch], offset sub_961790
0x959FCB: mov     dword ptr [esi+20h], offset sub_962CF0
0x959FD2: mov     [esi+24h], ebx
0x959FD5: mov     [esi+28h], ebx
0x959FD8: mov     [esi+2Ch], ebx
0x959FDB: mov     dword ptr [esi+30h], offset sub_960510
0x959FE2: mov     [esi+34h], ebx
0x959FE5: mov     dword ptr [esi+38h], offset sub_960650
0x959FEC: mov     [esi+3Ch], ebx
0x959FEF: mov     [esi+40h], ebx
0x959FF2: mov     [esi+44h], ebx
0x959FF5: mov     [esi+48h], ebx
0x959FF8: mov     [esi+4Ch], ebx
0x959FFB: mov     [esi+50h], ebx
0x959FFE: mov     [esi+54h], ebx
0x95A001: mov     [esi+58h], ebx
0x95A004: mov     [esi+5Ch], ebx
0x95A007: mov     [esi+6Ch], ebx
0x95A00A: mov     dword ptr [esi+70h], offset sub_95FBA0
0x95A011: mov     dword ptr [esi+78h], offset sub_95DCA0
0x95A018: mov     dword ptr [esi+7Ch], offset sub_95DD70
0x95A01F: mov     dword ptr [esi+80h], offset sub_95DEE0
0x95A029: mov     [esi+84h], ebx
0x95A02F: mov     [esi+88h], ebx
0x95A035: mov     dword ptr [esi+8Ch], offset sub_95E000
0x95A03F: call    FormHeapAlloc
0x95A044: mov     edi, eax
0x95A046: mov     dword ptr [edi], offset sub_96C6A0
0x95A04C: mov     [edi+4], ebx
0x95A04F: mov     [edi+8], ebx
0x95A052: mov     [edi+0Ch], ebx
0x95A055: mov     [edi+10h], ebx
0x95A058: mov     [edi+14h], ebx
0x95A05B: mov     dword ptr [edi+18h], offset sub_9646B0
0x95A062: mov     dword ptr [edi+1Ch], offset sub_968B00
0x95A069: mov     dword ptr [edi+20h], offset sub_9649B0
0x95A070: mov     [edi+24h], ebx
0x95A073: mov     [edi+28h], ebx
0x95A076: mov     eax, offset sub_95FC90
0x95A07B: mov     [edi+60h], eax
0x95A07E: mov     [edi+64h], eax
0x95A081: mov     [edi+68h], eax
0x95A084: mov     [edi+6Ch], eax
0x95A087: mov     [edi+74h], eax
0x95A08A: xor     ecx, ecx
0x95A08C: mov     eax, 6
0x95A091: mov     edx, 4
0x95A096: mul     edx
0x95A098: seto    cl
0x95A09B: mov     [edi+2Ch], ebx
0x95A09E: mov     dword ptr [edi+30h], offset sub_9602C0
0x95A0A5: mov     [edi+34h], ebx
0x95A0A8: mov     dword ptr [edi+38h], offset sub_9603C0
0x95A0AF: mov     [edi+3Ch], ebx
0x95A0B2: mov     [edi+40h], ebx
0x95A0B5: neg     ecx
0x95A0B7: or      ecx, eax
0x95A0B9: push    ecx; Size
0x95A0BA: mov     [edi+44h], ebx
0x95A0BD: mov     [edi+48h], ebx
0x95A0C0: mov     [edi+4Ch], ebx
0x95A0C3: mov     [edi+50h], ebx
0x95A0C6: mov     [edi+54h], ebx
0x95A0C9: mov     [edi+58h], ebx
0x95A0CC: mov     [edi+5Ch], ebx
0x95A0CF: mov     dword ptr [edi+70h], offset sub_95FD10
0x95A0D6: mov     dword ptr [edi+78h], offset sub_95E250
0x95A0DD: mov     dword ptr [edi+7Ch], offset sub_95E4D0
0x95A0E4: mov     dword ptr [edi+80h], offset sub_95E980
0x95A0EE: mov     [edi+84h], ebx
0x95A0F4: mov     [edi+88h], ebx
0x95A0FA: mov     dword ptr [edi+8Ch], offset sub_95EEF0
0x95A104: call    FormHeapAlloc
0x95A109: mov     ebp, eax
0x95A10B: xor     ecx, ecx
0x95A10D: mov     eax, 6
0x95A112: mov     edx, 4
0x95A117: mul     edx
0x95A119: seto    cl
0x95A11C: mov     dword ptr [ebp+0], offset sub_96CDD0
0x95A123: mov     dword ptr [ebp+4], offset sub_962E30
0x95A12A: mov     dword ptr [ebp+8], offset sub_9607B0
0x95A131: mov     [ebp+0Ch], ebx
0x95A134: mov     dword ptr [ebp+10h], offset sub_95FC20
0x95A13B: mov     dword ptr [ebp+14h], offset sub_95E0E0
0x95A142: neg     ecx
0x95A144: or      ecx, eax
0x95A146: push    ecx; Size
0x95A147: call    FormHeapAlloc
0x95A14C: mov     dword ptr [eax], offset sub_96CF80
0x95A152: mov     dword ptr [eax+4], offset sub_964AB0
0x95A159: mov     dword ptr [eax+8], offset sub_960CB0
0x95A160: mov     [eax+0Ch], ebx
0x95A163: mov     dword ptr [eax+10h], offset sub_95FDC0
0x95A16A: mov     dword ptr [eax+14h], offset sub_95F210
0x95A171: add     esp, 18h
0x95A174: mov     ds:0BA9AA4h, edi
0x95A17A: pop     edi
0x95A17B: mov     ds:0BA9AA0h, esi
0x95A181: pop     esi
0x95A182: mov     ds:0BA9AA8h, ebp
0x95A188: mov     ds:0BA9AACh, eax
0x95A18D: mov     dword ptr ds:0BA9AB0h, offset sub_95D830
0x95A197: mov     dword ptr ds:0BA9AB4h, offset sub_95D860
0x95A1A1: mov     dword ptr ds:0BA9AB8h, offset sub_95D8B0
0x95A1AB: pop     ebp
0x95A1AC: pop     ebx
0x95A1AD: retn
