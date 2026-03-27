0x414900: push    0FFFFFFFFh
0x414902: push    offset SEH_6F85B0
0x414907: mov     eax, large fs:0
0x41490D: push    eax
0x41490E: push    ecx
0x41490F: push    esi
0x414910: push    edi
0x414911: mov     eax, ___security_cookie
0x414916: xor     eax, esp
0x414918: push    eax
0x414919: lea     eax, [esp+1Ch+var_C]
0x41491D: mov     large fs:0, eax
0x414923: mov     esi, ecx
0x414925: mov     [esp+1Ch+var_10], esi
0x414929: mov     edi, [esp+1Ch+arg_0]
0x41492D: push    edi; struct std::exception *
0x41492E: call    ??0exception@std@@QAE@ABV01@@Z; std::exception::exception(std::exception const &)
0x414933: xor     eax, eax
0x414935: push    0FFFFFFFFh
0x414937: lea     ecx, [esi+0Ch]
0x41493A: mov     dword ptr [esi], offset ??_7logic_error@std@@6B@; const std::logic_error::`vftable'
0x414940: push    eax
0x414941: add     edi, 0Ch
0x414944: mov     dword ptr [ecx+18h], 0Fh
0x41494B: mov     [ecx+14h], eax
0x41494E: push    edi
0x41494F: mov     [esp+28h+var_4], eax
0x414953: mov     [ecx+4], al
0x414956: call    sub_414420
0x41495B: mov     eax, esi
0x41495D: mov     ecx, [esp+1Ch+var_C]
0x414961: mov     large fs:0, ecx
0x414968: pop     ecx
0x414969: pop     edi
0x41496A: pop     esi
0x41496B: add     esp, 10h
0x41496E: retn    4
