0x8CD320: mov     ecx, [esp+arg_0]
0x8CD324: mov     eax, [esp+arg_4]
0x8CD328: mov     edx, [eax+54h]
0x8CD32B: sub     esp, 0Ch
0x8CD32E: push    ebx
0x8CD32F: mov     ebx, [ecx+88h]
0x8CD335: test    ebx, ebx
0x8CD337: push    esi
0x8CD338: mov     esi, [esp+14h+arg_8]
0x8CD33C: push    edi
0x8CD33D: mov     edi, [esi+54h]
0x8CD340: jz      short loc_8CD360
0x8CD342: mov     [esp+18h+var_8], eax
0x8CD346: lea     eax, [esp+18h+var_C]
0x8CD34A: push    eax
0x8CD34B: mov     [esp+1Ch+var_C], 0Ch
0x8CD350: mov     [esp+1Ch+var_4], esi
0x8CD354: call    sub_898820
0x8CD359: pop     edi
0x8CD35A: pop     esi
0x8CD35B: pop     ebx
0x8CD35C: add     esp, 0Ch
0x8CD35F: retn
0x8CD360: push    edi
0x8CD361: push    edx
0x8CD362: push    ecx
0x8CD363: call    sub_8CC050
0x8CD368: add     esp, 0Ch
0x8CD36B: pop     edi
0x8CD36C: pop     esi
0x8CD36D: pop     ebx
0x8CD36E: add     esp, 0Ch
0x8CD371: retn
