0x796540: movzx   eax, byte ptr [esp+arg_4]
0x796545: fld     [esp+arg_0]
0x796549: push    esi
0x79654A: fld1
0x79654C: mov     esi, ecx
0x79654E: fsubrp  st(1), st
0x796550: mov     ecx, [esi+4]
0x796553: xor     edx, edx
0x796555: div     dword ptr [ecx+2Ch]
0x796558: fstp    [esp+4+arg_0]
0x79655C: lea     eax, [esp+4+arg_0]
0x796560: push    eax; int
0x796561: add     dl, [ecx+28h]
0x796564: lea     ecx, [esi+0F8h]; int
0x79656A: mov     byte ptr [esp+8+arg_4], dl
0x79656E: call    sub_785F30
0x796573: lea     ecx, [esp+4+arg_4]
0x796577: push    ecx; int
0x796578: lea     ecx, [esi+108h]; int
0x79657E: call    sub_78D4E0
0x796583: pop     esi
0x796584: retn    8
