0x706942: lodsb
0x706943: or      dh, [ebx+50C43300h]
0x706949: lea     eax, [esp+arg_C]
0x70694D: mov     large fs:0, eax
0x706953: mov     edi, ecx
0x706955: push    1Ch; Size
0x706957: call    FormHeapAlloc
0x70695C: mov     esi, eax
0x70695E: add     esp, 4
0x706961: mov     [esp+arg_8], esi
0x706965: test    esi, esi
0x706967: mov     [esp+arg_14], 0
0x70696F: jz      short loc_706986
0x706971: mov     ecx, esi; this
0x706973: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x706978: mov     dword ptr [esi], offset ??_7NiWireframeProperty@@6B@; const NiWireframeProperty::`vftable'
0x70697E: mov     word ptr [esi+18h], 0
0x706984: jmp     short loc_706988
0x706986: xor     esi, esi
0x706988: mov     eax, [esp+arg_1C]
0x70698C: push    eax
0x70698D: push    esi
0x70698E: mov     ecx, edi
0x706990: mov     [esp+8+arg_14], 0FFFFFFFFh
0x706998: call    sub_700A60
0x70699D: mov     cx, [edi+18h]
0x7069A1: mov     [esi+18h], cx
0x7069A5: mov     eax, esi
0x7069A7: mov     ecx, [esp+arg_C]
0x7069AB: mov     large fs:0, ecx
0x7069B2: pop     ecx
0x7069B3: pop     edi
0x7069B4: pop     esi
0x7069B5: add     esp, 10h
0x7069B8: retn    4
