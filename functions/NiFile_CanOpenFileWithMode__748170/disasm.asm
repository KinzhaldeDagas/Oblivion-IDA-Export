0x748170: mov     eax, [esp+arg_4]
0x748174: mov     ecx, [esp+arg_0]
0x748178: sub     esp, 28h
0x74817B: push    ebx
0x74817C: push    0
0x74817E: push    eax
0x74817F: push    ecx
0x748180: lea     ecx, [esp+38h+var_28]; this
0x748184: call    ??0NiFile@@QAE@XZ; NiFile::NiFile(void)
0x748189: mov     bl, [esp+2Ch+var_4]
0x74818D: lea     ecx, [esp+2Ch+var_28]; this
0x748191: call    ??1NiFile@@UAE@XZ; NiFile::~NiFile(void)
0x748196: mov     al, bl
0x748198: pop     ebx
0x748199: add     esp, 28h
0x74819C: retn
