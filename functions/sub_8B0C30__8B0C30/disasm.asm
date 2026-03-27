0x8B0C30: push    esi
0x8B0C31: mov     esi, ecx
0x8B0C33: fild    dword ptr [esi+10h]
0x8B0C36: fsub    qword ptr ds:0A2F928h
0x8B0C3C: fisub   [esp+4+arg_4]
0x8B0C40: call    Double_To_SInt32
0x8B0C45: imul    eax, [esi+0Ch]
0x8B0C49: add     eax, [esp+4+arg_0]
0x8B0C4D: mov     ecx, [esi+60h]
0x8B0C50: lea     eax, [eax+eax*2]
0x8B0C53: pop     esi
0x8B0C54: fld     dword ptr [ecx+eax*4+8]
0x8B0C58: retn    8
