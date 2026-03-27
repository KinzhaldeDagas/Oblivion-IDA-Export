0x980814: push    ebp
0x980815: mov     ebp, esp
0x980817: push    ecx
0x980818: push    0; int
0x98081A: lea     ecx, [ebp+var_4]; this
0x98081D: call    ??0_Lockit@std@@QAE@H@Z
0x980822: push    offset dword_BA9B58
0x980827: call    __Deletegloballocale
0x98082C: and     dword ptr ds:0BA9B58h, 0
0x980833: pop     ecx
0x980834: lea     ecx, [ebp+var_4]; this
0x980837: call    ??1_Lockit@std@@QAE@XZ
0x98083C: leave
0x98083D: retn
