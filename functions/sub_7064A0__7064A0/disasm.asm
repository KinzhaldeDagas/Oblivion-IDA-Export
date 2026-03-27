0x7064A0: push    0FFFFFFFFh
0x7064A2: push    offset SEH_8C8970
0x7064A7: mov     eax, large fs:0
0x7064AD: push    eax
0x7064AE: push    ecx
0x7064AF: push    esi
0x7064B0: push    edi
0x7064B1: mov     eax, ds:0B30AACh
0x7064B6: xor     eax, esp
0x7064B8: push    eax
0x7064B9: lea     eax, [esp+1Ch+var_C]
0x7064BD: mov     large fs:0, eax
0x7064C3: mov     edi, ecx
0x7064C5: push    1Ch; Size
0x7064C7: call    FormHeapAlloc
0x7064CC: mov     esi, eax
0x7064CE: add     esp, 4
0x7064D1: mov     [esp+1Ch+var_10], esi
0x7064D5: test    esi, esi
0x7064D7: mov     [esp+1Ch+var_4], 0
0x7064DF: jz      short loc_7064F6
0x7064E1: mov     ecx, esi; this
0x7064E3: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7064E8: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x7064EE: mov     word ptr [esi+18h], 8
0x7064F4: jmp     short loc_7064F8
0x7064F6: xor     esi, esi
0x7064F8: mov     eax, [esp+1Ch+arg_0]
0x7064FC: push    eax
0x7064FD: push    esi
0x7064FE: mov     ecx, edi
0x706500: mov     [esp+24h+var_4], 0FFFFFFFFh
0x706508: call    sub_700A60
0x70650D: mov     cx, [edi+18h]
0x706511: mov     [esi+18h], cx
0x706515: mov     eax, esi
0x706517: mov     ecx, [esp+1Ch+var_C]
0x70651B: mov     large fs:0, ecx
0x706522: pop     ecx
0x706523: pop     edi
0x706524: pop     esi
0x706525: add     esp, 10h
0x706528: retn    4
