0x6F9200: push    0FFFFFFFFh
0x6F9202: push    offset SEH_6F9200
0x6F9207: mov     eax, large fs:0
0x6F920D: push    eax
0x6F920E: sub     esp, 8
0x6F9211: push    esi
0x6F9212: mov     eax, ds:0B30AACh
0x6F9217: xor     eax, esp
0x6F9219: push    eax
0x6F921A: lea     eax, [esp+1Ch+var_C]
0x6F921E: mov     large fs:0, eax
0x6F9224: mov     esi, ecx
0x6F9226: mov     [esp+1Ch+var_10], esi
0x6F922A: xor     eax, eax
0x6F922C: cmp     [esp+1Ch+arg_8], eax
0x6F9230: mov     [esp+1Ch+var_14], eax
0x6F9234: jz      short loc_6F924F
0x6F9236: mov     dword ptr [esi], offset unk_A7CF7C
0x6F923C: mov     dword ptr [esi+4], offset ??_7?$basic_ios@DU?$char_traits@D@std@@@std@@6B@; const std::ios::`vftable'
0x6F9243: mov     [esp+1Ch+var_4], eax
0x6F9247: mov     [esp+1Ch+var_14], 1
0x6F924F: mov     eax, [esi]
0x6F9251: mov     ecx, [eax+4]
0x6F9254: mov     edx, dword ptr [esp+1Ch+arg_4]
0x6F9258: mov     eax, [esp+1Ch+arg_0]
0x6F925C: mov     dword ptr [esi+ecx], offset ??_7?$basic_ostream@DU?$char_traits@D@std@@@std@@6B?$_Iosb@H@std@@@; const std::ostream::`vftable'{for `std::_Iosb<int>'}
0x6F9263: mov     ecx, [esi]
0x6F9265: mov     ecx, [ecx+4]
0x6F9268: push    edx; char
0x6F9269: push    eax; int
0x6F926A: add     ecx, esi; struct std::ios_base *
0x6F926C: call    sub_6F9030
0x6F9271: mov     eax, esi
0x6F9273: mov     ecx, [esp+1Ch+var_C]
0x6F9277: mov     large fs:0, ecx
0x6F927E: pop     ecx
0x6F927F: pop     esi
0x6F9280: add     esp, 14h
0x6F9283: retn    0Ch
0x9C90C0: mov     eax, [ebp-14h]
0x9C90C3: and     eax, 1
0x9C90C6: jz      locret_9C90DB
0x9C90CC: and     dword ptr [ebp-14h], 0FFFFFFFEh
0x9C90D0: mov     ecx, [ebp-10h]
0x9C90D3: add     ecx, 4; struct std::ios_base *
0x9C90D6: jmp     unknown_libname_2
0x9C90DB: retn
0x9C90DC: mov     edx, dword ptr [esp+arg_4]
0x9C90E0: lea     eax, [edx-0Ch]
0x9C90E3: mov     ecx, [edx-10h]
0x9C90E6: xor     ecx, eax
0x9C90E8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C90ED: mov     eax, offset stru_AF1A08
0x9C90F2: jmp     ___CxxFrameHandler3
