0x4F6010: mov     ecx, [esp+arg_4]
0x4F6014: test    ecx, ecx
0x4F6016: jz      short loc_4F602F
0x4F6018: cmp     byte ptr [ecx+28h], 0
0x4F601C: jz      short loc_4F602F
0x4F601E: fldz
0x4F6020: fcomp   dword ptr [ecx+3Ch]
0x4F6023: fnstsw  ax
0x4F6025: test    ah, 5
0x4F6028: jp      short loc_4F602F
0x4F602A: fld     dword ptr [ecx+3Ch]
0x4F602D: jmp     short loc_4F6035
0x4F602F: fld     dword ptr ds:0B33E9Ch
0x4F6035: mov     eax, [esp+arg_C]
0x4F6039: fstp    qword ptr [eax]
0x4F603B: cmp     byte ptr ds:0B361ACh, 0
0x4F6042: jz      short loc_4F6059
0x4F6044: fld     qword ptr [eax]
0x4F6046: sub     esp, 8
0x4F6049: fstp    [esp+8+var_8]
0x4F604C: push    offset aGetsecondspass; "GetSecondsPassed >> %0.2f"
0x4F6051: call    Interface_ConsolePrint
0x4F6056: add     esp, 0Ch
0x4F6059: mov     al, 1
0x4F605B: retn
