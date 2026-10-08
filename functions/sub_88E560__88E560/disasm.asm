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
0x536DD0: mov     edx, ecx
0x536DD2: mov     eax, [edx+8]
0x536DD5: test    eax, eax
0x536DD7: js      short locret_536E0F
0x536DD9: mov     ecx, ds:0BA9DE4h
0x536DDF: push    esi
0x536DE0: mov     esi, large fs:2Ch
0x536DE7: mov     ecx, [esi+ecx*4]
0x536DEA: mov     ecx, [ecx+19Ch]
0x536DF0: test    ecx, ecx
0x536DF2: pop     esi
0x536DF3: jnz     short loc_536DFB
0x536DF5: mov     ecx, ds:0BA7D9Ch
0x536DFB: mov     edx, [edx]
0x536DFD: and     eax, 3FFFFFFFh
0x536E02: add     eax, eax
0x536E04: push    14h
0x536E06: add     eax, eax
0x536E08: push    eax
0x536E09: push    edx
0x536E0A: call    sub_8A75D0
0x536E0F: retn
0x9D60B0: mov     ecx, [ebp-10h]
0x9D60B3: jmp     sub_8CDAA0
0x9D60B8: mov     ecx, [ebp-10h]
0x9D60BB: add     ecx, 0A0h ; ' '
0x9D60C1: jmp     loc_536DD0
0x9D60C6: mov     ecx, [ebp-10h]
0x9D60C9: add     ecx, 0B0h ; '°'; slot
0x9D60CF: jmp     NiPointerSlot_Release
0x9D60D4: mov     edx, [esp+arg_4]
0x9D60D8: lea     eax, [edx-8]
0x9D60DB: mov     ecx, [edx-0Ch]
0x9D60DE: xor     ecx, eax
0x9D60E0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D60E5: mov     eax, offset stru_AFE058
0x9D60EA: jmp     ___CxxFrameHandler3
