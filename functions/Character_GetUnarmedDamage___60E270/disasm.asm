0x60E270: sub     esp, 8
0x60E273: fldz
0x60E275: push    esi
0x60E276: mov     esi, ecx
0x60E278: fst     [esp+0Ch+var_8]
0x60E27C: lea     eax, [esp+0Ch+var_4]
0x60E280: fstp    [esp+0Ch+var_4]
0x60E284: push    eax; int
0x60E285: lea     ecx, [esp+10h+var_8]
0x60E289: push    ecx; int
0x60E28A: push    0
0x60E28C: mov     ecx, esi; this
0x60E28E: call    Actor_GetFatigueFraction
0x60E293: mov     edx, [esi]
0x60E295: mov     eax, [edx+284h]
0x60E29B: push    ecx
0x60E29C: fstp    [esp+1Ch+var_1C]
0x60E29F: push    0
0x60E2A1: mov     ecx, esi
0x60E2A3: call    eax
0x60E2A5: mov     edx, [esi]
0x60E2A7: push    eax; char
0x60E2A8: mov     eax, [edx+284h]
0x60E2AE: push    7; float
0x60E2B0: mov     ecx, esi
0x60E2B2: call    eax
0x60E2B4: mov     edx, [esi]
0x60E2B6: push    eax; int
0x60E2B7: mov     eax, [edx+284h]
0x60E2BD: push    11h; int
0x60E2BF: mov     ecx, esi
0x60E2C1: call    eax
0x60E2C3: push    eax; int
0x60E2C4: call    Calc_HandToHandDamage
0x60E2C9: fld     [esp+28h+var_8]
0x60E2CD: add     esp, 1Ch
0x60E2D0: pop     esi
0x60E2D1: add     esp, 8
0x60E2D4: jmp     Double_To_SInt32
