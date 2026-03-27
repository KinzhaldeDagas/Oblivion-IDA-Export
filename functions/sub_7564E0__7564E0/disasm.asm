0x7564E0: push    esi
0x7564E1: push    edi
0x7564E2: mov     edi, [esp+8+arg_0]
0x7564E6: push    edi
0x7564E7: mov     esi, ecx
0x7564E9: call    sub_75F050
0x7564EE: mov     ecx, [esi+2Ch]
0x7564F1: mov     eax, [edi]
0x7564F3: mov     edx, [eax+2Ch]
0x7564F6: push    ecx
0x7564F7: mov     ecx, edi
0x7564F9: call    edx
0x7564FB: mov     eax, [edi+220h]
0x756501: push    1
0x756503: lea     ecx, [esp+0Ch+arg_0]
0x756507: push    ecx
0x756508: push    4
0x75650A: lea     edx, [esi+30h]
0x75650D: push    edx
0x75650E: push    eax
0x75650F: mov     eax, [eax+8]
0x756512: mov     [esp+1Ch+arg_0], 4
0x75651A: call    eax
0x75651C: mov     eax, [edi+220h]
0x756522: push    1
0x756524: lea     ecx, [esp+20h+arg_0]
0x756528: push    ecx
0x756529: push    4
0x75652B: lea     edx, [esi+34h]
0x75652E: push    edx
0x75652F: push    eax
0x756530: mov     eax, [eax+8]
0x756533: mov     [esp+30h+arg_0], 4
0x75653B: call    eax
0x75653D: add     esp, 28h
0x756540: push    edi
0x756541: lea     ecx, [esi+38h]
0x756544: call    sub_7094A0
0x756549: push    edi
0x75654A: lea     ecx, [esi+44h]
0x75654D: call    sub_7094A0
0x756552: pop     edi
0x756553: pop     esi
0x756554: retn    4
