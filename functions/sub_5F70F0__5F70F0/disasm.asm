0x5F70F0: sub     esp, 21Ch
0x5F70F6: mov     eax, ds:0B30AACh
0x5F70FB: xor     eax, esp
0x5F70FD: mov     [esp+21Ch+var_4], eax
0x5F7104: mov     eax, [esp+21Ch+arg_4]
0x5F710B: push    ebx
0x5F710C: push    edi
0x5F710D: push    0
0x5F710F: push    0
0x5F7111: mov     edi, ecx
0x5F7113: mov     ecx, [esp+22Ch+arg_0]
0x5F711A: push    eax
0x5F711B: push    edi
0x5F711C: call    TESTopic__CreateDialogueInfo
0x5F7121: fldz
0x5F7123: mov     ecx, edi
0x5F7125: fstp    [esp+224h+var_21C]
0x5F7129: mov     ebx, eax
0x5F712B: call    sub_5EF930
0x5F7130: test    ebx, ebx
0x5F7132: jz      loc_5F72E9
0x5F7138: push    ebp
0x5F7139: push    esi
0x5F713A: mov     esi, [ebx+0Ch]
0x5F713D: test    esi, esi
0x5F713F: jz      short loc_5F7150
0x5F7141: mov     ecx, esi; int
0x5F7143: call    sub_5308D0
0x5F7148: push    edi
0x5F7149: mov     ecx, esi
0x5F714B: call    sub_531470
0x5F7150: mov     eax, ds:0B33398h
0x5F7155: mov     ebp, [eax+24h]
0x5F7158: test    ebp, ebp
0x5F715A: jz      loc_5F72D7
0x5F7160: mov     ecx, ebx
0x5F7162: call    sub_6B7BA0
0x5F7167: mov     ecx, ebx
0x5F7169: call    sub_6B7C20
0x5F716E: test    eax, eax
0x5F7170: mov     [esp+22Ch+var_214], eax
0x5F7174: jz      loc_5F72D7
0x5F717A: mov     ecx, [eax+10h]
0x5F717D: push    ecx
0x5F717E: lea     edx, [esp+230h+var_204]
0x5F7182: push    edx
0x5F7183: call    BSStringT_Static_StrCpy
0x5F7188: fldz
0x5F718A: add     esp, 8
0x5F718D: cmp     [esp+22Ch+arg_8], 0
0x5F7195: push    ecx
0x5F7196: fstp    [esp+230h+duration]
0x5F7199: push    0
0x5F719B: jz      short loc_5F71A9
0x5F719D: push    105h
0x5F71A2: lea     eax, [esp+238h+var_204]
0x5F71A6: push    eax
0x5F71A7: jmp     short loc_5F71B3
0x5F71A9: push    106h
0x5F71AE: lea     ecx, [esp+238h+var_204]
0x5F71B2: push    ecx
0x5F71B3: mov     ecx, ebp
0x5F71B5: call    sub_6AE370
0x5F71BA: mov     esi, eax
0x5F71BC: test    esi, esi
0x5F71BE: jz      loc_5F72A8
0x5F71C4: cmp     [esp+22Ch+arg_8], 0
0x5F71CC: jnz     short loc_5F723C
0x5F71CE: mov     edx, [edi]
0x5F71D0: mov     eax, [edx+174h]
0x5F71D6: mov     ecx, edi
0x5F71D8: call    eax
0x5F71DA: fld     dword ptr ds:0B161D0h
0x5F71E0: mov     ecx, [eax]
0x5F71E2: mov     edx, [eax+4]
0x5F71E5: mov     eax, [eax+8]
0x5F71E8: sub     esp, 8
0x5F71EB: fstp    [esp+234h+duration]; float
0x5F71EF: mov     [esp+234h+var_210], ecx
0x5F71F3: fld     dword ptr ds:0B161C8h
0x5F71F9: mov     ecx, [esi]
0x5F71FB: fstp    [esp+234h+var_234]; float
0x5F71FE: push    ecx; int
0x5F71FF: mov     ecx, ebp
0x5F7201: mov     [esp+238h+var_20C], edx
0x5F7205: mov     [esp+238h+var_208], eax
0x5F7209: call    sub_6ACC50
0x5F720E: fld     [esp+22Ch+var_208]
0x5F7212: sub     esp, 0Ch
0x5F7215: fstp    [esp+238h+duration]; float
0x5F7219: mov     ecx, esi
0x5F721B: fld     [esp+238h+var_20C]
0x5F721F: fstp    [esp+238h+var_234]; float
0x5F7223: fld     [esp+238h+var_210]
0x5F7227: fstp    [esp+238h+var_238]; float
0x5F722A: call    sub_6B7360
0x5F722F: mov     edx, [esi]
0x5F7231: push    edi
0x5F7232: push    edx
0x5F7233: mov     ecx, ebp
0x5F7235: call    sub_6AC3E0
0x5F723A: jmp     short loc_5F7279
0x5F723C: mov     ecx, offset dword_B161E0
0x5F7241: call    GameSetting_GetSafeFloatPointer
0x5F7246: fld     dword ptr [eax]
0x5F7248: fmul    qword ptr ds:0A309F0h
0x5F724E: mov     ecx, esi
0x5F7250: fnstcw  word ptr [esp+22Ch+var_21C]
0x5F7254: movzx   eax, word ptr [esp+22Ch+var_21C]
0x5F7259: or      eax, 0C00h
0x5F725E: mov     [esp+22Ch+var_218], eax
0x5F7262: fldcw   word ptr [esp+22Ch+var_218]
0x5F7266: fistp   [esp+22Ch+var_218]
0x5F726A: movzx   eax, word ptr [esp+22Ch+var_218]
0x5F726F: push    eax
0x5F7270: fldcw   word ptr [esp+230h+var_21C]
0x5F7274: call    sub_6B72B0
0x5F7279: push    0
0x5F727B: mov     ecx, esi
0x5F727D: call    sub_6B7190
0x5F7282: mov     ecx, [edi+58h]
0x5F7285: mov     edx, [ecx]
0x5F7287: mov     eax, [edx+340h]
0x5F728D: push    esi
0x5F728E: push    0
0x5F7290: call    eax
0x5F7292: mov     ecx, esi
0x5F7294: call    sub_6B7340
0x5F7299: movzx   ecx, ax
0x5F729C: mov     [esp+22Ch+var_218], ecx
0x5F72A0: fild    [esp+22Ch+var_218]
0x5F72A4: fstp    [esp+22Ch+var_21C]
0x5F72A8: cmp     byte ptr ds:0B13208h, 0
0x5F72AF: jz      short loc_5F72D7
0x5F72B1: cmp     [esp+22Ch+arg_C], 0
0x5F72B9: jnz     short loc_5F72D7
0x5F72BB: fld     dword ptr ds:0A30634h
0x5F72C1: mov     edx, [esp+22Ch+var_214]
0x5F72C5: mov     eax, [edx]
0x5F72C7: push    ecx
0x5F72C8: fstp    [esp+230h+duration]; duration
0x5F72CB: push    0; unk2
0x5F72CD: push    esi; unk1
0x5F72CE: push    eax; string
0x5F72CF: call    GameUI_QueueMessage
0x5F72D4: add     esp, 10h
0x5F72D7: mov     ecx, ebx
0x5F72D9: call    sub_6B81D0
0x5F72DE: push    ebx
0x5F72DF: call    FormHeapFree
0x5F72E4: add     esp, 4
0x5F72E7: pop     esi
0x5F72E8: pop     ebp
0x5F72E9: mov     ecx, [esp+224h+var_4]
0x5F72F0: fld     [esp+224h+var_21C]
0x5F72F4: pop     edi
0x5F72F5: pop     ebx
0x5F72F6: xor     ecx, esp
0x5F72F8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5F72FD: add     esp, 21Ch
0x5F7303: retn    14h
