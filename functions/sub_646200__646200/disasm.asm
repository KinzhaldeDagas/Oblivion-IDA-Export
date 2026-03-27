0x646200: sub     esp, 8
0x646203: push    ebp
0x646204: push    esi
0x646205: mov     esi, ecx
0x646207: cmp     dword ptr [esi+2Ch], 0
0x64620B: push    edi
0x64620C: mov     edi, [esp+14h+arg_0]
0x646210: jnz     short loc_64621D
0x646212: mov     eax, [esi]
0x646214: mov     edx, [eax+558h]
0x64621A: push    edi
0x64621B: call    edx
0x64621D: mov     ebp, [esi+2Ch]
0x646220: test    ebp, ebp
0x646222: jnz     short loc_64623C
0x646224: mov     eax, [esi]
0x646226: mov     edx, [eax+188h]
0x64622C: push    1
0x64622E: push    edi
0x64622F: mov     ecx, esi
0x646231: call    edx
0x646233: pop     edi
0x646234: pop     esi
0x646235: pop     ebp
0x646236: add     esp, 8
0x646239: retn    10h
0x64623C: mov     ecx, ebp; this
0x64623E: call    Actor__GetProcessLevel
0x646243: cmp     eax, 1
0x646246: jge     short loc_64626A
0x646248: mov     ecx, edi
0x64624A: call    sub_5E6BA0
0x64624F: test    al, al
0x646251: jnz     short loc_64626A
0x646253: mov     eax, [esi]
0x646255: mov     edx, [eax+188h]
0x64625B: push    2
0x64625D: push    edi
0x64625E: mov     ecx, esi
0x646260: call    edx
0x646262: push    edi; int
0x646263: mov     ecx, ebp; int
0x646265: call    sub_5EFF30
0x64626A: mov     eax, [esi+2Ch]
0x64626D: push    0
0x64626F: push    eax
0x646270: mov     ecx, edi
0x646272: call    TesObjectREF_GetDistance
0x646277: fcomp   qword ptr ds:0A37478h
0x64627D: fnstsw  ax
0x64627F: test    ah, 41h
0x646282: jnz     short loc_6462A3
0x646284: mov     eax, [esp+14h+arg_C]
0x646288: mov     edx, [esi]
0x64628A: mov     edx, [edx+198h]
0x646290: push    1
0x646292: push    eax
0x646293: push    0
0x646295: push    edi
0x646296: mov     ecx, esi
0x646298: call    edx
0x64629A: pop     edi
0x64629B: pop     esi
0x64629C: pop     ebp
0x64629D: add     esp, 8
0x6462A0: retn    10h
0x6462A3: mov     ecx, edi; this
0x6462A5: call    sub_5E6C60
0x6462AA: test    al, al
0x6462AC: jz      loc_646224
0x6462B2: mov     eax, [esi+8]
0x6462B5: cmp     byte ptr [eax+20h], 0Dh
0x6462B9: jz      loc_646224
0x6462BF: mov     ecx, [esi+2Ch]
0x6462C2: push    ebx
0x6462C3: push    0; int
0x6462C5: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x6462CA: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6462CF: push    0; int
0x6462D1: push    ecx; void *
0x6462D2: call    OblivionDynamicCast
0x6462D7: mov     ebx, eax
0x6462D9: add     esp, 14h
0x6462DC: test    ebx, ebx
0x6462DE: jz      loc_6463BC
0x6462E4: mov     edx, [ebx]
0x6462E6: mov     eax, [edx+250h]
0x6462EC: mov     ecx, ebx
0x6462EE: call    eax
0x6462F0: fild    dword ptr ds:0B36A60h
0x6462F6: fcompp
0x6462F8: fnstsw  ax
0x6462FA: test    ah, 41h
0x6462FD: jp      short loc_646327
0x6462FF: mov     edx, [esi]
0x646301: mov     eax, [edx+228h]
0x646307: push    1
0x646309: push    0
0x64630B: push    0
0x64630D: push    0
0x64630F: push    0
0x646311: push    0
0x646313: push    0
0x646315: push    0
0x646317: push    ebx
0x646318: push    edi
0x646319: mov     ecx, esi
0x64631B: call    eax
0x64631D: pop     ebx
0x64631E: pop     edi
0x64631F: pop     esi
0x646320: pop     ebp
0x646321: add     esp, 8
0x646324: retn    10h
0x646327: mov     ecx, ebx
0x646329: call    sub_5E4420
0x64632E: mov     edx, [ebx]
0x646330: mov     [esp+18h+arg_0], eax
0x646334: fild    [esp+18h+arg_0]
0x646338: mov     eax, [edx+250h]
0x64633E: mov     ecx, ebx
0x646340: fstp    qword ptr [esp+18h+var_8]
0x646344: call    eax
0x646346: fcomp   qword ptr [esp+18h+var_8]
0x64634A: fnstsw  ax
0x64634C: test    ah, 41h
0x64634F: jp      short loc_6463BC
0x646351: mov     edx, [ebx]
0x646353: mov     eax, [edx+250h]
0x646359: mov     ecx, ebx
0x64635B: call    eax
0x64635D: call    Double_To_SInt32
0x646362: push    eax
0x646363: push    edi
0x646364: mov     ecx, ebx
0x646366: call    sub_5E4A40
0x64636B: mov     eax, [ebx]
0x64636D: mov     edx, [eax+250h]
0x646373: mov     ecx, ebx
0x646375: mov     [esp+18h+arg_C], eax
0x646379: call    edx
0x64637B: fmul    qword ptr ds:0A3D360h
0x646381: mov     eax, [esp+18h+arg_C]
0x646385: mov     edx, [eax+254h]
0x64638B: fstp    [esp+18h+arg_0]
0x64638F: push    ecx
0x646390: fld     [esp+1Ch+arg_0]
0x646394: mov     ecx, ebx
0x646396: fstp    [esp+1Ch+var_1C]
0x646399: call    edx
0x64639B: mov     eax, [esi]
0x64639D: mov     edx, [eax+188h]
0x6463A3: push    2
0x6463A5: push    edi
0x6463A6: mov     ecx, esi
0x6463A8: call    edx
0x6463AA: push    edi; int
0x6463AB: mov     ecx, ebp; int
0x6463AD: call    sub_5EFF30
0x6463B2: pop     ebx
0x6463B3: pop     edi
0x6463B4: pop     esi
0x6463B5: pop     ebp
0x6463B6: add     esp, 8
0x6463B9: retn    10h
0x6463BC: mov     eax, [esi]
0x6463BE: mov     edx, [eax+188h]
0x6463C4: push    2
0x6463C6: push    edi
0x6463C7: mov     ecx, esi
0x6463C9: call    edx
0x6463CB: push    edi; int
0x6463CC: mov     ecx, ebp; int
0x6463CE: call    sub_5EFF30
0x6463D3: mov     eax, [esi]
0x6463D5: mov     edx, [eax+228h]
0x6463DB: push    1
0x6463DD: push    0
0x6463DF: push    0
0x6463E1: push    0
0x6463E3: push    0
0x6463E5: push    0
0x6463E7: push    0
0x6463E9: push    0
0x6463EB: push    ebx
0x6463EC: push    edi
0x6463ED: mov     ecx, esi
0x6463EF: call    edx
0x6463F1: pop     ebx
0x6463F2: pop     edi
0x6463F3: pop     esi
0x6463F4: pop     ebp
0x6463F5: add     esp, 8
0x6463F8: retn    10h
