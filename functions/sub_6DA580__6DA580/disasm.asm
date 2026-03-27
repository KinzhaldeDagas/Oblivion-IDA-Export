0x6DA580: sub     esp, 10h
0x6DA583: push    esi
0x6DA584: mov     esi, ecx
0x6DA586: fld     dword ptr [esi+8]
0x6DA589: fld     [esp+14h+arg_0]
0x6DA58D: fld     st
0x6DA58F: fucomp  st(2)
0x6DA591: fnstsw  ax
0x6DA593: fstp    st(1)
0x6DA595: test    ah, 44h
0x6DA598: jp      short loc_6DA5FC
0x6DA59A: mov     ecx, [esi+0Ch]
0x6DA59D: fstp    st
0x6DA59F: mov     eax, [esp+14h+arg_8]
0x6DA5A3: mov     [eax], ecx
0x6DA5A5: mov     edx, [esi+10h]
0x6DA5A8: mov     [eax+4], edx
0x6DA5AB: mov     ecx, [esi+14h]
0x6DA5AE: mov     [eax+8], ecx
0x6DA5B1: fld     dword ptr [esi+0Ch]
0x6DA5B4: fld     dword ptr ds:0B24FC8h
0x6DA5BA: fucompp
0x6DA5BC: fnstsw  ax
0x6DA5BE: test    ah, 44h
0x6DA5C1: jp      loc_6DA6A4
0x6DA5C7: fld     dword ptr [esi+10h]
0x6DA5CA: fld     dword ptr ds:0B24FCCh
0x6DA5D0: fucompp
0x6DA5D2: fnstsw  ax
0x6DA5D4: test    ah, 44h
0x6DA5D7: jp      loc_6DA6A4
0x6DA5DD: fld     dword ptr [esi+14h]
0x6DA5E0: fld     dword ptr ds:0B24FD0h
0x6DA5E6: fucompp
0x6DA5E8: fnstsw  ax
0x6DA5EA: test    ah, 44h
0x6DA5ED: jp      loc_6DA6A4
0x6DA5F3: xor     al, al
0x6DA5F5: pop     esi
0x6DA5F6: add     esp, 10h
0x6DA5F9: retn    0Ch
0x6DA5FC: mov     eax, [esi+18h]
0x6DA5FF: test    eax, eax
0x6DA601: jz      short loc_6DA64B
0x6DA603: mov     ecx, [eax+8]
0x6DA606: test    ecx, ecx
0x6DA608: mov     dl, [eax+14h]
0x6DA60B: push    edi
0x6DA60C: mov     edi, [eax+10h]
0x6DA60F: mov     eax, [eax+0Ch]
0x6DA612: mov     [esp+18h+var_10], dl
0x6DA616: jbe     short loc_6DA64A
0x6DA618: mov     edx, dword ptr [esp+18h+var_10]
0x6DA61C: push    edx; char
0x6DA61D: lea     edx, [esi+1Ch]
0x6DA620: push    edx; int
0x6DA621: push    ecx; int
0x6DA622: push    edi; int
0x6DA623: push    eax; int
0x6DA624: push    ecx
0x6DA625: lea     eax, [esp+30h+var_C]
0x6DA629: fstp    [esp+30h+var_30]; float
0x6DA62C: push    eax; int
0x6DA62D: call    sub_6BBBA0
0x6DA632: fld     [esp+34h+arg_0]
0x6DA636: mov     ecx, [eax]
0x6DA638: mov     [esi+0Ch], ecx
0x6DA63B: mov     edx, [eax+4]
0x6DA63E: mov     [esi+10h], edx
0x6DA641: mov     eax, [eax+8]
0x6DA644: add     esp, 1Ch
0x6DA647: mov     [esi+14h], eax
0x6DA64A: pop     edi
0x6DA64B: fld     dword ptr [esi+0Ch]
0x6DA64E: fld     dword ptr ds:0B24FC8h
0x6DA654: fucompp
0x6DA656: fnstsw  ax
0x6DA658: test    ah, 44h
0x6DA65B: jp      short loc_6DA68C
0x6DA65D: fld     dword ptr [esi+10h]
0x6DA660: fld     dword ptr ds:0B24FCCh
0x6DA666: fucompp
0x6DA668: fnstsw  ax
0x6DA66A: test    ah, 44h
0x6DA66D: jp      short loc_6DA68C
0x6DA66F: fld     dword ptr [esi+14h]
0x6DA672: fld     dword ptr ds:0B24FD0h
0x6DA678: fucompp
0x6DA67A: fnstsw  ax
0x6DA67C: test    ah, 44h
0x6DA67F: jp      short loc_6DA68C
0x6DA681: fstp    st
0x6DA683: xor     al, al
0x6DA685: pop     esi
0x6DA686: add     esp, 10h
0x6DA689: retn    0Ch
0x6DA68C: mov     ecx, [esi+0Ch]
0x6DA68F: mov     eax, [esp+14h+arg_8]
0x6DA693: mov     [eax], ecx
0x6DA695: mov     edx, [esi+10h]
0x6DA698: mov     [eax+4], edx
0x6DA69B: mov     ecx, [esi+14h]
0x6DA69E: mov     [eax+8], ecx
0x6DA6A1: fstp    dword ptr [esi+8]
0x6DA6A4: mov     al, 1
0x6DA6A6: pop     esi
0x6DA6A7: add     esp, 10h
0x6DA6AA: retn    0Ch
