0x754CB0: push    esi
0x754CB1: mov     esi, [esp+4+arg_0]
0x754CB5: push    edi
0x754CB6: push    esi
0x754CB7: mov     edi, ecx
0x754CB9: call    sub_75EFA0
0x754CBE: mov     ecx, esi
0x754CC0: call    sub_712A20
0x754CC5: cmp     dword ptr [esi+0D8h], 0A000113h
0x754CCF: jb      short loc_754CF5
0x754CD1: mov     eax, [esi+21Ch]
0x754CD7: mov     edx, [eax+4]
0x754CDA: push    1
0x754CDC: lea     ecx, [esp+0Ch+arg_0]
0x754CE0: push    ecx
0x754CE1: push    4
0x754CE3: add     edi, 30h ; '0'
0x754CE6: push    edi
0x754CE7: push    eax
0x754CE8: mov     [esp+1Ch+arg_0], 4
0x754CF0: call    edx
0x754CF2: add     esp, 14h
0x754CF5: pop     edi
0x754CF6: pop     esi
0x754CF7: retn    4
