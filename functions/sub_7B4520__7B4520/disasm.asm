0x7B4520: sub     esp, 8
0x7B4523: mov     ecx, [esp+8+arg_0]
0x7B4527: mov     eax, [ecx+8]
0x7B452A: push    esi
0x7B452B: push    edi
0x7B452C: mov     edi, [ecx]
0x7B452E: sub     eax, edi
0x7B4530: cdq
0x7B4531: sub     eax, edx
0x7B4533: mov     esi, eax
0x7B4535: mov     eax, [ecx+4]
0x7B4538: sub     eax, [ecx+0Ch]
0x7B453B: sar     esi, 1
0x7B453D: add     edi, esi
0x7B453F: mov     [esp+10h+arg_0], edi
0x7B4543: cdq
0x7B4544: fild    [esp+10h+arg_0]
0x7B4548: sub     eax, edx
0x7B454A: sar     eax, 1
0x7B454C: mov     [esp+10h+var_8], esi
0x7B4550: fstp    dword ptr ds:0B4313Ch
0x7B4556: mov     ecx, [ecx+0Ch]
0x7B4559: add     ecx, eax
0x7B455B: mov     [esp+10h+arg_0], ecx
0x7B455F: mov     [esp+10h+var_4], eax
0x7B4563: pop     edi
0x7B4564: fild    [esp+0Ch+arg_0]
0x7B4568: pop     esi
0x7B4569: fstp    dword ptr ds:0B43140h
0x7B456F: fild    [esp+8+var_8]
0x7B4572: fstp    dword ptr ds:0B43144h
0x7B4578: fild    [esp+8+var_4]
0x7B457C: fstp    dword ptr ds:0B43148h
0x7B4582: add     esp, 8
0x7B4585: retn
