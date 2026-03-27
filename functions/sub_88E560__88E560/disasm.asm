0x88E560: push    0FFFFFFFFh
0x88E562: push    offset SEH_88E560
0x88E567: mov     eax, large fs:0
0x88E56D: push    eax
0x88E56E: push    ecx
0x88E56F: push    esi
0x88E570: mov     eax, ds:0B30AACh
0x88E575: xor     eax, esp
0x88E577: push    eax
0x88E578: lea     eax, [esp+18h+var_C]
0x88E57C: mov     large fs:0, eax
0x88E582: mov     esi, ecx
0x88E584: mov     [esp+18h+var_10], esi
0x88E588: mov     eax, [esp+18h+arg_0]
0x88E58C: mov     ecx, [eax]
0x88E58E: push    ecx
0x88E58F: add     eax, 20h ; ' '
0x88E592: push    eax
0x88E593: mov     ecx, esi
0x88E595: call    sub_8CDCB0
0x88E59A: xor     eax, eax
0x88E59C: mov     dword ptr [esi], offset ??_7hkAvoidBox@@6B@; const hkAvoidBox::`vftable'
0x88E5A2: mov     [esp+18h+var_4], eax
0x88E5A6: mov     [esi+0A0h], eax
0x88E5AC: mov     [esi+0A4h], eax
0x88E5B2: mov     dword ptr [esi+0A8h], 80000000h
0x88E5BC: mov     [esi+0B0h], eax
0x88E5C2: mov     ecx, esi
0x88E5C4: mov     byte ptr [esp+18h+var_4], 2
0x88E5C9: mov     [esi+0ACh], eax
0x88E5CF: mov     [esi+0FCh], al
0x88E5D5: mov     byte ptr [esi+0FDh], 1
0x88E5DC: call    sub_88E310
0x88E5E1: mov     eax, esi
0x88E5E3: mov     ecx, [esp+18h+var_C]
0x88E5E7: mov     large fs:0, ecx
0x88E5EE: pop     ecx
0x88E5EF: pop     esi
0x88E5F0: add     esp, 10h
0x88E5F3: retn    4
