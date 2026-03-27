0x482170: mov     edx, [esp+arg_8]
0x482174: test    edx, edx
0x482176: jz      short loc_482198
0x482178: mov     eax, [ecx+0Ch]
0x48217B: imul    eax, [esp+arg_0]
0x482180: mov     ecx, [ecx+10h]
0x482183: add     eax, [esp+arg_4]
0x482187: push    edx
0x482188: lea     eax, [ecx+eax*8]
0x48218B: mov     ecx, [eax+4]
0x48218E: mov     [eax], edx
0x482190: call    sub_49A000
0x482195: retn    0Ch
0x482198: mov     eax, [esp+arg_4]
0x48219C: mov     edx, [ecx]
0x48219E: mov     edx, [edx+1Ch]
0x4821A1: push    eax
0x4821A2: mov     eax, [esp+4+arg_0]
0x4821A6: push    eax
0x4821A7: call    edx
0x4821A9: retn    0Ch
