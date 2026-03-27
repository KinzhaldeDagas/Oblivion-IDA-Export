0x5057D0: mov     eax, [esp+arg_8]
0x5057D4: push    esi
0x5057D5: mov     esi, [esp+4+arg_18]
0x5057D9: push    esi
0x5057DA: push    0
0x5057DC: push    0
0x5057DE: push    eax
0x5057DF: call    sub_4F57A0
0x5057E4: add     esp, 10h
0x5057E7: test    al, al
0x5057E9: jnz     short loc_5057ED
0x5057EB: pop     esi
0x5057EC: retn
0x5057ED: cmp     byte ptr ds:0B361ACh, 0
0x5057F4: jz      short loc_50580B
0x5057F6: fld     qword ptr [esi]
0x5057F8: sub     esp, 8
0x5057FB: fstp    [esp+0Ch+var_C]
0x5057FE: push    offset aGetdoordefault; "GetDoorDefaultOpen >> %0.2f"
0x505803: call    Interface_ConsolePrint
0x505808: add     esp, 0Ch
0x50580B: mov     al, 1
0x50580D: pop     esi
0x50580E: retn
