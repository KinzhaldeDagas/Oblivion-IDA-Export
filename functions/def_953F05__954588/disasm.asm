0x954588: push    ecx; jumptable 00953F05 default case
0x954589: mov     eax, esp
0x95458B: push    200h
0x954590: lea     edx, [esp+8+arg_50]
0x954594: push    edx
0x954595: lea     ecx, [esp+0Ch+arg_44]
0x954599: mov     byte ptr [eax], 1
0x95459C: call    sub_8BBFB0
0x9545A1: push    offset aUnknownClass_1; "Unknown class member found during write"...
0x9545A6: lea     ecx, [esp+4+arg_44]
0x9545AA: call    sub_8BBDB0
0x9545AF: mov     ecx, ds:0BA7FB0h
0x9545B5: mov     eax, [ecx]
0x9545B7: push    26Ch
0x9545BC: push    offset a_CopierHkobjec; ".\\copier\\hkObjectCopier.cpp"
0x9545C1: lea     edx, [esp+8+arg_50]
0x9545C5: push    edx
0x9545C6: push    641E3E05h
0x9545CB: push    3
0x9545CD: call    dword ptr [eax+8]
0x9545D0: lea     ecx, [esp+arg_44]
0x9545D4: call    sub_8BC000
0x9545D9: jmp     loc_954000; jumptable 00953F05 cases 1-19,21,24
