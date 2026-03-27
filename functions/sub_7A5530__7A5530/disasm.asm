0x7A5530: push    0FFFFFFFFh
0x7A5532: push    offset SEH_7A5530
0x7A5537: mov     eax, large fs:0
0x7A553D: push    eax
0x7A553E: sub     esp, 0A8h
0x7A5544: mov     eax, ds:0B30AACh
0x7A5549: xor     eax, esp
0x7A554B: mov     [esp+0B4h+var_10], eax
0x7A5552: push    ebx
0x7A5553: push    ebp
0x7A5554: push    esi
0x7A5555: push    edi
0x7A5556: mov     eax, ds:0B30AACh
0x7A555B: xor     eax, esp
0x7A555D: push    eax
0x7A555E: lea     eax, [esp+0C8h+var_C]
0x7A5565: mov     large fs:0, eax
0x7A556B: mov     edi, [esp+0C8h+arg_0]
0x7A5572: mov     esi, ecx
0x7A5574: mov     ecx, edi
0x7A5576: call    sub_78EB40
0x7A557B: xor     ebx, ebx
0x7A557D: mov     ebp, 10h
0x7A5582: jmp     short loc_7A5590
0x7A5584: db 8Dh, 0A4h, 24h, 4 dup(0)
0x7A558B: jmp     short loc_7A5590
0x7A558D: align 10h
0x7A5590: lea     ecx, [eax-4652h]; switch 4 cases
0x7A5596: cmp     ecx, 3
0x7A5599: ja      def_7A559F; jumptable 007A559F default case
0x7A559F: jmp     ds:jpt_7A559F[ecx*4]; switch jump
0x7A55A6: lea     eax, [esp+0C8h+var_7C]; jumptable 007A559F case 18002
0x7A55AA: push    eax
0x7A55AB: mov     ecx, edi
0x7A55AD: call    sub_78EBA0
0x7A55B2: fld     dword ptr [eax]
0x7A55B4: fstp    dword ptr [esi]
0x7A55B6: fld     dword ptr [eax+4]
0x7A55B9: fstp    dword ptr [esi+4]
0x7A55BC: fld     dword ptr [eax+8]
0x7A55BF: fstp    dword ptr [esi+8]
0x7A55C2: jmp     loc_7A56B4
0x7A55C7: lea     ecx, [esp+0C8h+var_88]; jumptable 007A559F case 18003
0x7A55CB: push    ecx
0x7A55CC: mov     ecx, edi
0x7A55CE: call    sub_78EBA0
0x7A55D3: fld     dword ptr [eax]
0x7A55D5: fstp    dword ptr [esi+0Ch]
0x7A55D8: fld     dword ptr [eax+4]
0x7A55DB: fstp    dword ptr [esi+10h]
0x7A55DE: fld     dword ptr [eax+8]
0x7A55E1: fstp    dword ptr [esi+14h]
0x7A55E4: jmp     loc_7A56B4
0x7A55E9: lea     edx, [esp+0C8h+var_94]; jumptable 007A559F case 18004
0x7A55ED: push    edx
0x7A55EE: mov     ecx, edi
0x7A55F0: call    sub_78EBA0
0x7A55F5: fld     dword ptr [eax]
0x7A55F7: fstp    dword ptr [esi+18h]
0x7A55FA: fld     dword ptr [eax+4]
0x7A55FD: fstp    dword ptr [esi+1Ch]
0x7A5600: fld     dword ptr [eax+8]
0x7A5603: fstp    dword ptr [esi+20h]
0x7A5606: jmp     loc_7A56B4
0x7A560B: sub     esp, 1Ch; jumptable 007A559F case 18005
0x7A560E: mov     eax, esp
0x7A5610: mov     [esp+0E4h+var_B4], esp
0x7A5614: push    eax
0x7A5615: mov     ecx, edi
0x7A5617: call    sub_78EC20
0x7A561C: lea     ecx, [esp+0E4h+var_2C]
0x7A5623: call    sub_789120
0x7A5628: lea     ecx, [esp+0C8h+var_B0]
0x7A562C: push    ecx
0x7A562D: lea     ecx, [esp+0CCh+var_2C]
0x7A5634: mov     [esp+0CCh+var_4], ebx
0x7A563B: call    sub_789430
0x7A5640: push    0FFFFFFFFh
0x7A5642: push    ebx
0x7A5643: push    eax
0x7A5644: lea     ecx, [esi+24h]
0x7A5647: mov     byte ptr [esp+0D4h+var_4], 1
0x7A564F: call    sub_414420
0x7A5654: cmp     [esp+0C8h+var_98], ebp
0x7A5658: jb      short loc_7A5667
0x7A565A: mov     edx, [esp+0C8h+var_AC]
0x7A565E: push    edx
0x7A565F: call    FormHeapFree
0x7A5664: add     esp, 4
0x7A5667: cmp     [esp+0C8h+var_14], ebp
0x7A566E: mov     [esp+0C8h+var_98], 0Fh
0x7A5676: mov     [esp+0C8h+var_9C], ebx
0x7A567A: mov     byte ptr [esp+0C8h+var_AC], bl
0x7A567E: mov     [esp+0C8h+var_4], 0FFFFFFFFh
0x7A5689: jb      short loc_7A569B
0x7A568B: mov     eax, [esp+0C8h+var_28]
0x7A5692: push    eax
0x7A5693: call    FormHeapFree
0x7A5698: add     esp, 4
0x7A569B: mov     [esp+0C8h+var_14], 0Fh
0x7A56A6: mov     [esp+0C8h+var_18], ebx
0x7A56AD: mov     byte ptr [esp+0C8h+var_28], bl
0x7A56B4: mov     ecx, edi
0x7A56B6: call    sub_78EB40
0x7A56BB: cmp     eax, 4651h
0x7A56C0: jnz     loc_7A5590
0x7A56C6: mov     ecx, [esp+0C8h+var_C]
0x7A56CD: mov     large fs:0, ecx
0x7A56D4: pop     ecx
0x7A56D5: pop     edi
0x7A56D6: pop     esi
0x7A56D7: pop     ebp
0x7A56D8: pop     ebx
0x7A56D9: mov     ecx, [esp+0B4h+var_10]
0x7A56E0: xor     ecx, esp
0x7A56E2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7A56E7: add     esp, 0B4h
0x7A56ED: retn    4
0x7A56F0: push    eax; jumptable 007A559F default case
0x7A56F1: push    offset aMalformedFro_0; "malformed frond info (token %d)"
0x7A56F6: lea     esi, [esp+0D0h+var_48]
0x7A56FD: call    sub_7A54A0
0x7A5702: add     esp, 8
0x7A5705: push    ebx
0x7A5706: push    eax
0x7A5707: lea     ecx, [esp+0D0h+var_70]
0x7A570B: mov     [esp+0D0h+var_4], 2
0x7A5716: call    sub_789190
0x7A571B: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A5720: lea     ecx, [esp+0CCh+var_70]
0x7A5724: push    ecx
0x7A5725: call    ThrowException??
