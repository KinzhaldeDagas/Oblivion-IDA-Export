0x431370: push    0FFFFFFFFh
0x431372: push    offset SEH_431370
0x431377: mov     eax, large fs:0
0x43137D: push    eax
0x43137E: sub     esp, 28h
0x431381: push    ebx
0x431382: mov     eax, ___security_cookie
0x431387: xor     eax, esp
0x431389: push    eax
0x43138A: lea     eax, [esp+3Ch+var_C]
0x43138E: mov     large fs:0, eax
0x431394: mov     eax, [esp+3Ch+arg_4]
0x431398: test    eax, eax
0x43139A: jnz     short loc_4313E6
0x43139C: mov     ecx, OBSE_g_FileFinder
0x4313A2: test    ecx, ecx
0x4313A4: jz      short loc_4313CE
0x4313A6: mov     eax, [ecx]
0x4313A8: mov     edx, [esp+3Ch+arg_0]
0x4313AC: mov     eax, [eax+4]
0x4313AF: push    0FFFFFFFFh
0x4313B1: push    0
0x4313B3: push    0
0x4313B5: push    edx
0x4313B6: call    eax
0x4313B8: test    eax, eax
0x4313BA: setnz   al
0x4313BD: mov     ecx, [esp+3Ch+var_C]
0x4313C1: mov     large fs:0, ecx
0x4313C8: pop     ecx
0x4313C9: pop     ebx
0x4313CA: add     esp, 34h
0x4313CD: retn
0x4313CE: xor     eax, eax
0x4313D0: test    eax, eax
0x4313D2: setnz   al
0x4313D5: mov     ecx, [esp+3Ch+var_C]
0x4313D9: mov     large fs:0, ecx
0x4313E0: pop     ecx
0x4313E1: pop     ebx
0x4313E2: add     esp, 34h
0x4313E5: retn
0x4313E6: mov     ecx, [esp+3Ch+arg_0]
0x4313EA: push    0
0x4313EC: push    eax
0x4313ED: push    ecx
0x4313EE: lea     ecx, [esp+48h+var_34]; this
0x4313F2: call    ??0NiFile@@QAE@XZ; NiFile::NiFile(void)
0x4313F7: mov     edx, [esp+3Ch+var_34]
0x4313FB: mov     eax, [edx+4]
0x4313FE: lea     ecx, [esp+3Ch+var_34]
0x431402: mov     [esp+3Ch+var_4], 0
0x43140A: call    eax
0x43140C: lea     ecx, [esp+3Ch+var_34]; this
0x431410: mov     bl, al
0x431412: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x43141A: call    ??1NiFile@@UAE@XZ; NiFile::~NiFile(void)
0x43141F: mov     al, bl
0x431421: mov     ecx, [esp+3Ch+var_C]
0x431425: mov     large fs:0, ecx
0x43142C: pop     ecx
0x43142D: pop     ebx
0x43142E: add     esp, 34h
0x431431: retn
