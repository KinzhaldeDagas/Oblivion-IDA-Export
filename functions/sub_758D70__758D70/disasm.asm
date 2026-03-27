0x758D70: push    esi
0x758D71: push    edi
0x758D72: mov     edi, [esp+8+arg_0]
0x758D76: push    edi
0x758D77: mov     esi, ecx
0x758D79: call    sub_752DC0
0x758D7E: mov     ecx, edi
0x758D80: call    sub_712A20
0x758D85: push    edi
0x758D86: lea     ecx, [esi+1Ch]
0x758D89: call    sub_709430
0x758D8E: mov     eax, [edi+21Ch]
0x758D94: push    1
0x758D96: lea     ecx, [esp+0Ch+arg_0]
0x758D9A: push    ecx
0x758D9B: push    4
0x758D9D: lea     edx, [esi+28h]
0x758DA0: push    edx
0x758DA1: push    eax
0x758DA2: mov     eax, [eax+4]
0x758DA5: mov     [esp+1Ch+arg_0], 4
0x758DAD: call    eax
0x758DAF: mov     eax, [edi+21Ch]
0x758DB5: push    1
0x758DB7: lea     ecx, [esp+20h+arg_0]
0x758DBB: push    ecx
0x758DBC: push    4
0x758DBE: lea     edx, [esi+2Ch]
0x758DC1: push    edx
0x758DC2: push    eax
0x758DC3: mov     eax, [eax+4]
0x758DC6: mov     [esp+30h+arg_0], 4
0x758DCE: call    eax
0x758DD0: mov     edi, [edi+21Ch]
0x758DD6: mov     edx, [edi+4]
0x758DD9: push    1
0x758DDB: lea     ecx, [esp+34h+arg_0]
0x758DDF: push    ecx
0x758DE0: push    4
0x758DE2: add     esi, 30h ; '0'
0x758DE5: push    esi
0x758DE6: push    edi
0x758DE7: mov     [esp+44h+arg_0], 4
0x758DEF: call    edx
0x758DF1: add     esp, 3Ch
0x758DF4: pop     edi
0x758DF5: pop     esi
0x758DF6: retn    4
