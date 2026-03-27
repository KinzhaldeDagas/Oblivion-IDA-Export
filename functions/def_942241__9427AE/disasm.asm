0x9427AE: push    ecx; jumptable 00942241 default case
0x9427AF: mov     eax, esp
0x9427B1: push    200h
0x9427B6: lea     edx, [esp+8+arg_30]
0x9427BA: push    edx
0x9427BB: lea     ecx, [esp+0Ch+arg_18]
0x9427BF: mov     byte ptr [eax], 1
0x9427C2: call    sub_8BBFB0
0x9427C7: push    offset aUnhandledMembe; "Unhandled member type found!"
0x9427CC: lea     ecx, [esp+4+arg_18]
0x9427D0: call    sub_8BBDB0
0x9427D5: mov     ecx, ds:0BA7FB0h
0x9427DB: mov     eax, [ecx]
0x9427DD: push    298h
0x9427E2: push    offset a_SerializeXmlH; ".\\serialize\\xml\\hkXmlObjectWriter.cp"...
0x9427E7: lea     edx, [esp+8+arg_30]
0x9427EB: push    edx
0x9427EC: push    40A18B57h
0x9427F1: push    3; Args
0x9427F3: call    dword ptr [eax+8]
0x9427F6: lea     ecx, [esp+14h+arg_4]
0x9427FA: call    sub_8BC000
0x9427FF: push    offset aHkparam; "</hkparam>"
0x942804: push    ebp; int
0x942805: call    sub_8BBEE0
0x94280A: add     esp, 8
0x94280D: pop     edi
0x94280E: pop     esi
0x94280F: pop     ebp
0x942810: pop     ebx
0x942811: add     esp, 224h
0x942817: retn
