0x800110: push    0FFFFFFFFh
0x800112: push    offset ??0RefractionShader@@QAE@XZ_SEH
0x800117: mov     eax, large fs:0
0x80011D: push    eax
0x80011E: push    ecx
0x80011F: push    ebx
0x800120: push    ebp
0x800121: push    esi
0x800122: push    edi
0x800123: mov     eax, ds:0B30AACh
0x800128: xor     eax, esp
0x80012A: push    eax
0x80012B: lea     eax, [esp+24h+var_C]
0x80012F: mov     large fs:0, eax
0x800135: mov     esi, ecx
0x800137: mov     [esp+24h+var_10], esi
0x80013B: mov     dword ptr [esi], offset ??_7RefractionShader@@6B@; const RefractionShader::`vftable'
0x800141: mov     edi, [esi+90h]
0x800147: test    edi, edi
0x800149: mov     [esp+24h+var_4], 4
0x800151: jz      short loc_800179
0x800153: lea     eax, [edi+4]
0x800156: push    eax; lpAddend
0x800157: call    dword ptr ds:0A2807Ch
0x80015D: test    eax, eax
0x80015F: jnz     short loc_80016F
0x800161: test    edi, edi
0x800163: jz      short loc_80016F
0x800165: mov     edx, [edi]
0x800167: mov     eax, [edx]
0x800169: push    1
0x80016B: mov     ecx, edi
0x80016D: call    eax
0x80016F: mov     dword ptr [esi+90h], 0
0x800179: mov     edi, [esi+94h]
0x80017F: test    edi, edi
0x800181: lea     ebx, [esi+94h]
0x800187: jz      short loc_8001AB
0x800189: lea     ecx, [edi+4]
0x80018C: push    ecx; lpAddend
0x80018D: call    dword ptr ds:0A2807Ch
0x800193: test    eax, eax
0x800195: jnz     short loc_8001A5
0x800197: test    edi, edi
0x800199: jz      short loc_8001A5
0x80019B: mov     edx, [edi]
0x80019D: mov     eax, [edx]
0x80019F: push    1
0x8001A1: mov     ecx, edi
0x8001A3: call    eax
0x8001A5: mov     dword ptr [ebx], 0
0x8001AB: mov     ecx, [esi+9Ch]
0x8001B1: test    ecx, ecx
0x8001B3: lea     ebp, [esi+9Ch]
0x8001B9: jz      short loc_8001CD
0x8001BB: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x8001BF: jnz     short loc_8001C6
0x8001C1: call    sub_7604D0
0x8001C6: mov     dword ptr [ebp+0], 0
0x8001CD: mov     edi, [esi+0A0h]
0x8001D3: test    edi, edi
0x8001D5: jz      short loc_8001FD
0x8001D7: lea     ecx, [edi+4]
0x8001DA: push    ecx; lpAddend
0x8001DB: call    dword ptr ds:0A2807Ch
0x8001E1: test    eax, eax
0x8001E3: jnz     short loc_8001F3
0x8001E5: test    edi, edi
0x8001E7: jz      short loc_8001F3
0x8001E9: mov     edx, [edi]
0x8001EB: mov     eax, [edx]
0x8001ED: push    1
0x8001EF: mov     ecx, edi
0x8001F1: call    eax
0x8001F3: mov     dword ptr [esi+0A0h], 0
0x8001FD: mov     eax, ds:0B474ACh
0x800202: test    eax, eax
0x800204: jz      short loc_800242
0x800206: mov     ecx, ds:0B42F50h; this
0x80020C: push    eax; a2
0x80020D: call    sub_7C1EE0
0x800212: mov     edi, ds:0B474ACh
0x800218: test    edi, edi
0x80021A: jz      short loc_800242
0x80021C: lea     ecx, [edi+4]
0x80021F: push    ecx; lpAddend
0x800220: call    dword ptr ds:0A2807Ch
0x800226: test    eax, eax
0x800228: jnz     short loc_800238
0x80022A: test    edi, edi
0x80022C: jz      short loc_800238
0x80022E: mov     edx, [edi]
0x800230: mov     eax, [edx]
0x800232: push    1
0x800234: mov     ecx, edi
0x800236: call    eax
0x800238: mov     dword ptr ds:0B474ACh, 0
0x800242: mov     edi, [esi+0A0h]
0x800248: test    edi, edi
0x80024A: mov     byte ptr [esp+24h+var_4], 3
0x80024F: jz      short loc_80026D
0x800251: lea     ecx, [edi+4]
0x800254: push    ecx; lpAddend
0x800255: call    dword ptr ds:0A2807Ch
0x80025B: test    eax, eax
0x80025D: jnz     short loc_80026D
0x80025F: test    edi, edi
0x800261: jz      short loc_80026D
0x800263: mov     edx, [edi]
0x800265: mov     eax, [edx]
0x800267: push    1
0x800269: mov     ecx, edi
0x80026B: call    eax
0x80026D: push    offset sub_4027D0; void (__thiscall *)(void *)
0x800272: push    1; int
0x800274: push    4; unsigned int
0x800276: push    ebp; void *
0x800277: mov     byte ptr [esp+34h+var_4], 2
0x80027C: call    $LN21
0x800281: push    offset sub_7016A0; void (__thiscall *)(void *)
0x800286: push    1; int
0x800288: push    4; unsigned int
0x80028A: push    ebx; void *
0x80028B: mov     byte ptr [esp+34h+var_4], 1
0x800290: call    $LN21
0x800295: push    offset sub_7016A0; void (__thiscall *)(void *)
0x80029A: push    1; int
0x80029C: push    4; unsigned int
0x80029E: lea     eax, [esi+90h]
0x8002A4: push    eax; void *
0x8002A5: mov     byte ptr [esp+34h+var_4], 0
0x8002AA: call    $LN21
0x8002AF: mov     ecx, esi; this
0x8002B1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8002B9: call    ??1BSImageSpaceShader@@UAE@XZ; BSImageSpaceShader::~BSImageSpaceShader(void)
0x8002BE: mov     ecx, dword ptr [esp+24h+var_C]
0x8002C2: mov     large fs:0, ecx
0x8002C9: pop     ecx
0x8002CA: pop     edi
0x8002CB: pop     esi
0x8002CC: pop     ebp
0x8002CD: pop     ebx
0x8002CE: add     esp, 10h
0x8002D1: retn
