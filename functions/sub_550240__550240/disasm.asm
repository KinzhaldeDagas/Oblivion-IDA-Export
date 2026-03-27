0x550240: sub     esp, 44h
0x550243: mov     eax, ds:0B30AACh
0x550248: xor     eax, esp
0x55024A: mov     [esp+44h+var_4], eax
0x55024E: mov     eax, [esp+44h+arg_0]
0x550252: push    eax
0x550253: lea     ecx, [esp+48h+Str1]
0x550257: push    offset a08x; "%08X"
0x55025C: push    ecx
0x55025D: call    __sprintf
0x550262: mov     edx, ds:0A647A0h
0x550268: mov     ecx, ds:0A647A8h
0x55026E: mov     eax, ds:0A647A4h
0x550273: mov     [esp+50h+var_3C], edx
0x550277: mov     edx, ds:0A647ACh
0x55027D: mov     [esp+50h+var_34], ecx
0x550281: movzx   ecx, byte ptr ds:0A647B2h
0x550288: mov     [esp+50h+var_30], edx
0x55028C: add     esp, 0Ch
0x55028F: mov     [esp+44h+var_38], eax
0x550293: mov     ax, ds:0A647B0h
0x550299: lea     edx, [esp+44h+Str1]
0x55029C: mov     [esp+44h+var_2A], cl
0x5502A0: mov     ecx, ds:0B35300h
0x5502A6: push    edx; Str1
0x5502A7: mov     [esp+48h+var_2C], ax
0x5502AC: call    sub_4A1A10
0x5502B1: mov     ecx, ds:0A64790h
0x5502B7: mov     edx, ds:0A64794h
0x5502BD: mov     eax, ds:0A6478Ch
0x5502C2: mov     [esp+44h+var_38], ecx
0x5502C6: movzx   ecx, byte ptr ds:0A6479Ch
0x5502CD: mov     [esp+44h+var_34], edx
0x5502D1: mov     [esp+44h+var_3C], eax
0x5502D5: mov     eax, ds:0A64798h
0x5502DA: lea     edx, [esp+44h+Str1]
0x5502DD: mov     byte ptr [esp+44h+var_2C], cl
0x5502E1: mov     ecx, ds:0B35300h
0x5502E7: push    edx; Str1
0x5502E8: mov     [esp+48h+var_30], eax
0x5502EC: call    sub_4A1A10
0x5502F1: mov     ecx, ds:0A64788h
0x5502F7: mov     eax, ds:0A64784h
0x5502FC: lea     edx, [esp+44h+Str1]
0x5502FF: mov     [esp+44h+var_38], ecx
0x550303: mov     ecx, ds:0B35300h
0x550309: push    edx; Str1
0x55030A: mov     [esp+48h+var_3C], eax
0x55030E: call    sub_4A1A10
0x550313: mov     ecx, [esp+44h+var_4]
0x550317: xor     ecx, esp
0x550319: call    @__security_check_cookie@4; __security_check_cookie(x)
0x55031E: add     esp, 44h
0x550321: retn
