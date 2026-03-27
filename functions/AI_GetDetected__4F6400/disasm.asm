0x4F6400: push    ecx
0x4F6401: fldz
0x4F6403: mov     eax, [esp+4+arg_C]
0x4F6407: push    ebx
0x4F6408: fstp    qword ptr [eax]
0x4F640A: push    esi
0x4F640B: mov     esi, [esp+0Ch+arg_0]
0x4F640F: push    edi
0x4F6410: xor     ebx, ebx
0x4F6412: xor     edi, edi
0x4F6414: test    esi, esi
0x4F6416: mov     [esp+10h+var_4], 0FFFFFFFFh
0x4F641E: jz      short loc_4F6432
0x4F6420: mov     edx, [esi]
0x4F6422: mov     eax, [edx+190h]
0x4F6428: mov     ecx, esi
0x4F642A: call    eax
0x4F642C: test    al, al
0x4F642E: jz      short loc_4F6432
0x4F6430: mov     edi, esi
0x4F6432: push    ebp
0x4F6433: mov     ebp, [esp+14h+arg_4]
0x4F6437: xor     esi, esi
0x4F6439: test    ebp, ebp
0x4F643B: jz      short loc_4F6450
0x4F643D: mov     edx, [ebp+0]
0x4F6440: mov     eax, [edx+190h]
0x4F6446: mov     ecx, ebp
0x4F6448: call    eax
0x4F644A: test    al, al
0x4F644C: jz      short loc_4F6450
0x4F644E: mov     esi, ebp
0x4F6450: test    edi, edi
0x4F6452: pop     ebp
0x4F6453: jz      short loc_4F64BB
0x4F6455: test    esi, esi
0x4F6457: jz      short loc_4F64BB
0x4F6459: mov     ecx, ds:0B333C4h
0x4F645F: cmp     esi, ecx
0x4F6461: jnz     short loc_4F646C
0x4F6463: push    0
0x4F6465: call    PlayerCharacter_IsPlayerInCombat
0x4F646A: jmp     short loc_4F647A
0x4F646C: mov     edx, [esi]
0x4F646E: mov     eax, [edx+334h]
0x4F6474: push    1
0x4F6476: mov     ecx, esi
0x4F6478: call    eax
0x4F647A: push    0; int
0x4F647C: mov     byte ptr [esp+14h+arg_4], al
0x4F6480: mov     ecx, [esp+14h+arg_4]
0x4F6484: push    ecx; int
0x4F6485: push    0; int
0x4F6487: lea     edx, [esp+1Ch+arg_0]
0x4F648B: push    edx; int
0x4F648C: push    esi; int
0x4F648D: push    0; int
0x4F648F: mov     ecx, edi; int
0x4F6491: call    Actor_GetDetectionLevel
0x4F6496: mov     ebx, eax
0x4F6498: test    ebx, ebx
0x4F649A: jle     short loc_4F64A4
0x4F649C: fld1
0x4F649E: mov     eax, [esp+10h+arg_C]
0x4F64A2: fstp    qword ptr [eax]
0x4F64A4: mov     ecx, [esi+58h]
0x4F64A7: mov     edx, [ecx]
0x4F64A9: mov     eax, [edx+3ACh]
0x4F64AF: push    0
0x4F64B1: push    esi
0x4F64B2: call    eax
0x4F64B4: call    Double_To_SInt32
0x4F64B9: jmp     short loc_4F64BF
0x4F64BB: mov     eax, [esp+10h+var_4]
0x4F64BF: cmp     byte ptr ds:0B361ACh, 0
0x4F64C6: jz      short loc_4F64D7
0x4F64C8: push    eax
0x4F64C9: push    ebx
0x4F64CA: push    offset aGetdetectedIAn; "GetDetected >> %i and light %i"
0x4F64CF: call    Interface_ConsolePrint
0x4F64D4: add     esp, 0Ch
0x4F64D7: pop     edi
0x4F64D8: pop     esi
0x4F64D9: mov     al, 1
0x4F64DB: pop     ebx
0x4F64DC: pop     ecx
0x4F64DD: retn
