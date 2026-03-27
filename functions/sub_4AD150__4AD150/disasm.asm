0x4AD150: mov     eax, [esp+arg_0]
0x4AD154: sub     esp, 18h
0x4AD157: push    esi
0x4AD158: push    edi
0x4AD159: push    0; int
0x4AD15B: push    offset ??_R0?AVTESEffectShader@@@8; struct TypeDescriptor *
0x4AD160: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4AD165: push    0; int
0x4AD167: push    eax; void *
0x4AD168: mov     edi, ecx
0x4AD16A: call    OblivionDynamicCast
0x4AD16F: mov     esi, eax
0x4AD171: add     esp, 14h
0x4AD174: test    esi, esi
0x4AD176: jnz     short loc_4AD182
0x4AD178: pop     edi
0x4AD179: mov     al, 1
0x4AD17B: pop     esi
0x4AD17C: add     esp, 18h
0x4AD17F: retn    4
0x4AD182: push    esi; a2
0x4AD183: mov     ecx, edi; this
0x4AD185: call    TESForm_CompareAllComponentsTo
0x4AD18A: test    al, al
0x4AD18C: jnz     short loc_4AD178
0x4AD18E: mov     edx, [edi+0F8h]
0x4AD194: mov     edx, [edx+0Ch]
0x4AD197: lea     ecx, [edi+0F8h]
0x4AD19D: lea     eax, [esi+0F8h]
0x4AD1A3: push    eax
0x4AD1A4: call    edx
0x4AD1A6: test    al, al
0x4AD1A8: jnz     short loc_4AD178
0x4AD1AA: mov     eax, [edi+104h]
0x4AD1B0: mov     eax, [eax+0Ch]
0x4AD1B3: lea     ecx, [edi+104h]
0x4AD1B9: lea     edx, [esi+104h]
0x4AD1BF: push    edx
0x4AD1C0: call    eax
0x4AD1C2: test    al, al
0x4AD1C4: jnz     short loc_4AD178
0x4AD1C6: mov     ecx, [edi+1Ch]
0x4AD1C9: cmp     ecx, [esi+1Ch]
0x4AD1CC: jnz     short loc_4AD178
0x4AD1CE: mov     edx, [edi+20h]
0x4AD1D1: cmp     edx, [esi+20h]
0x4AD1D4: jnz     short loc_4AD178
0x4AD1D6: mov     eax, [edi+24h]
0x4AD1D9: cmp     eax, [esi+24h]
0x4AD1DC: jnz     short loc_4AD178
0x4AD1DE: mov     ecx, [edi+28h]
0x4AD1E1: cmp     ecx, [esi+28h]
0x4AD1E4: jnz     short loc_4AD178
0x4AD1E6: fld     dword ptr [edi+2Ch]
0x4AD1E9: fld     dword ptr [esi+2Ch]
0x4AD1EC: fucompp
0x4AD1EE: fnstsw  ax
0x4AD1F0: test    ah, 44h
0x4AD1F3: jp      short loc_4AD178
0x4AD1F5: fld     dword ptr [edi+30h]
0x4AD1F8: fld     dword ptr [esi+30h]
0x4AD1FB: fucompp
0x4AD1FD: fnstsw  ax
0x4AD1FF: test    ah, 44h
0x4AD202: jp      loc_4AD178
0x4AD208: fld     dword ptr [edi+34h]
0x4AD20B: fld     dword ptr [esi+34h]
0x4AD20E: fucompp
0x4AD210: fnstsw  ax
0x4AD212: test    ah, 44h
0x4AD215: jp      loc_4AD178
0x4AD21B: fld     dword ptr [edi+38h]
0x4AD21E: fld     dword ptr [esi+38h]
0x4AD221: fucompp
0x4AD223: fnstsw  ax
0x4AD225: test    ah, 44h
0x4AD228: jp      loc_4AD178
0x4AD22E: fld     dword ptr [edi+3Ch]
0x4AD231: fld     dword ptr [esi+3Ch]
0x4AD234: fucompp
0x4AD236: fnstsw  ax
0x4AD238: test    ah, 44h
0x4AD23B: jp      loc_4AD178
0x4AD241: fld     dword ptr [edi+40h]
0x4AD244: fld     dword ptr [esi+40h]
0x4AD247: fucompp
0x4AD249: fnstsw  ax
0x4AD24B: test    ah, 44h
0x4AD24E: jp      loc_4AD178
0x4AD254: fld     dword ptr [edi+44h]
0x4AD257: fld     dword ptr [esi+44h]
0x4AD25A: fucompp
0x4AD25C: fnstsw  ax
0x4AD25E: test    ah, 44h
0x4AD261: jp      loc_4AD178
0x4AD267: fld     dword ptr [edi+48h]
0x4AD26A: fld     dword ptr [esi+48h]
0x4AD26D: fucompp
0x4AD26F: fnstsw  ax
0x4AD271: test    ah, 44h
0x4AD274: jp      loc_4AD178
0x4AD27A: fld     dword ptr [edi+4Ch]
0x4AD27D: fld     dword ptr [esi+4Ch]
0x4AD280: fucompp
0x4AD282: fnstsw  ax
0x4AD284: test    ah, 44h
0x4AD287: jp      loc_4AD178
0x4AD28D: mov     edx, [edi+50h]
0x4AD290: cmp     edx, [esi+50h]
0x4AD293: jnz     loc_4AD178
0x4AD299: fld     dword ptr [edi+54h]
0x4AD29C: fld     dword ptr [esi+54h]
0x4AD29F: fucompp
0x4AD2A1: fnstsw  ax
0x4AD2A3: test    ah, 44h
0x4AD2A6: jp      loc_4AD178
0x4AD2AC: fld     dword ptr [edi+58h]
0x4AD2AF: fld     dword ptr [esi+58h]
0x4AD2B2: fucompp
0x4AD2B4: fnstsw  ax
0x4AD2B6: test    ah, 44h
0x4AD2B9: jp      loc_4AD178
0x4AD2BF: fld     dword ptr [edi+5Ch]
0x4AD2C2: fld     dword ptr [esi+5Ch]
0x4AD2C5: fucompp
0x4AD2C7: fnstsw  ax
0x4AD2C9: test    ah, 44h
0x4AD2CC: jp      loc_4AD178
0x4AD2D2: fld     dword ptr [edi+60h]
0x4AD2D5: fld     dword ptr [esi+60h]
0x4AD2D8: fucompp
0x4AD2DA: fnstsw  ax
0x4AD2DC: test    ah, 44h
0x4AD2DF: jp      loc_4AD178
0x4AD2E5: fld     dword ptr [edi+64h]
0x4AD2E8: fld     dword ptr [esi+64h]
0x4AD2EB: fucompp
0x4AD2ED: fnstsw  ax
0x4AD2EF: test    ah, 44h
0x4AD2F2: jp      loc_4AD178
0x4AD2F8: fld     dword ptr [edi+68h]
0x4AD2FB: fld     dword ptr [esi+68h]
0x4AD2FE: fucompp
0x4AD300: fnstsw  ax
0x4AD302: test    ah, 44h
0x4AD305: jp      loc_4AD178
0x4AD30B: mov     eax, [edi+74h]
0x4AD30E: cmp     eax, [esi+74h]
0x4AD311: jnz     loc_4AD178
0x4AD317: fld     dword ptr [edi+6Ch]
0x4AD31A: fld     dword ptr [esi+6Ch]
0x4AD31D: fucompp
0x4AD31F: fnstsw  ax
0x4AD321: test    ah, 44h
0x4AD324: jp      loc_4AD178
0x4AD32A: fld     dword ptr [edi+70h]
0x4AD32D: fld     dword ptr [esi+70h]
0x4AD330: fucompp
0x4AD332: fnstsw  ax
0x4AD334: test    ah, 44h
0x4AD337: jp      loc_4AD178
0x4AD33D: mov     ecx, [edi+78h]
0x4AD340: cmp     ecx, [esi+78h]
0x4AD343: jnz     loc_4AD178
0x4AD349: mov     edx, [edi+84h]
0x4AD34F: cmp     edx, [esi+84h]
0x4AD355: jnz     loc_4AD178
0x4AD35B: mov     eax, [edi+7Ch]
0x4AD35E: cmp     eax, [esi+7Ch]
0x4AD361: jnz     loc_4AD178
0x4AD367: mov     ecx, [edi+80h]
0x4AD36D: cmp     ecx, [esi+80h]
0x4AD373: jnz     loc_4AD178
0x4AD379: fld     dword ptr [edi+88h]
0x4AD37F: fld     dword ptr [esi+88h]
0x4AD385: fucompp
0x4AD387: fnstsw  ax
0x4AD389: test    ah, 44h
0x4AD38C: jp      loc_4AD178
0x4AD392: fld     dword ptr [edi+8Ch]
0x4AD398: fld     dword ptr [esi+8Ch]
0x4AD39E: fucompp
0x4AD3A0: fnstsw  ax
0x4AD3A2: test    ah, 44h
0x4AD3A5: jp      loc_4AD178
0x4AD3AB: fld     dword ptr [edi+90h]
0x4AD3B1: fld     dword ptr [esi+90h]
0x4AD3B7: fucompp
0x4AD3B9: fnstsw  ax
0x4AD3BB: test    ah, 44h
0x4AD3BE: jp      loc_4AD178
0x4AD3C4: fld     dword ptr [edi+94h]
0x4AD3CA: fld     dword ptr [esi+94h]
0x4AD3D0: fucompp
0x4AD3D2: fnstsw  ax
0x4AD3D4: test    ah, 44h
0x4AD3D7: jp      loc_4AD178
0x4AD3DD: fld     dword ptr [edi+98h]
0x4AD3E3: fld     dword ptr [esi+98h]
0x4AD3E9: fucompp
0x4AD3EB: fnstsw  ax
0x4AD3ED: test    ah, 44h
0x4AD3F0: jp      loc_4AD178
0x4AD3F6: fld     dword ptr [edi+9Ch]
0x4AD3FC: fld     dword ptr [esi+9Ch]
0x4AD402: fucompp
0x4AD404: fnstsw  ax
0x4AD406: test    ah, 44h
0x4AD409: jp      loc_4AD178
0x4AD40F: fld     dword ptr [edi+0A0h]
0x4AD415: fld     dword ptr [esi+0A0h]
0x4AD41B: fucompp
0x4AD41D: fnstsw  ax
0x4AD41F: test    ah, 44h
0x4AD422: jp      loc_4AD178
0x4AD428: fld     dword ptr [edi+0A4h]
0x4AD42E: fld     dword ptr [esi+0A4h]
0x4AD434: fucompp
0x4AD436: fnstsw  ax
0x4AD438: test    ah, 44h
0x4AD43B: jp      loc_4AD178
0x4AD441: fld     dword ptr [edi+0A8h]
0x4AD447: fld     dword ptr [esi+0A8h]
0x4AD44D: fucompp
0x4AD44F: fnstsw  ax
0x4AD451: test    ah, 44h
0x4AD454: jp      loc_4AD178
0x4AD45A: lea     edx, [esp+20h+var_18]
0x4AD45E: push    edx
0x4AD45F: mov     ecx, esi
0x4AD461: call    sub_4AC7C0
0x4AD466: push    eax
0x4AD467: lea     eax, [esp+24h+var_C]
0x4AD46B: push    eax
0x4AD46C: mov     ecx, edi
0x4AD46E: call    sub_4AC7C0
0x4AD473: mov     ecx, eax
0x4AD475: call    sub_8AA390
0x4AD47A: test    al, al
0x4AD47C: jnz     loc_4AD178
0x4AD482: fld     dword ptr [edi+0A8h]
0x4AD488: fld     dword ptr [esi+0A8h]
0x4AD48E: fucompp
0x4AD490: fnstsw  ax
0x4AD492: test    ah, 44h
0x4AD495: jp      loc_4AD178
0x4AD49B: lea     ecx, [esp+20h+var_C]
0x4AD49F: push    ecx
0x4AD4A0: mov     ecx, esi
0x4AD4A2: call    sub_4AC7F0
0x4AD4A7: push    eax
0x4AD4A8: lea     edx, [esp+24h+var_18]
0x4AD4AC: push    edx
0x4AD4AD: mov     ecx, edi
0x4AD4AF: call    sub_4AC7F0
0x4AD4B4: mov     ecx, eax
0x4AD4B6: call    sub_8AA390
0x4AD4BB: test    al, al
0x4AD4BD: jnz     loc_4AD178
0x4AD4C3: fld     dword ptr [edi+0C4h]
0x4AD4C9: fld     dword ptr [esi+0C4h]
0x4AD4CF: fucompp
0x4AD4D1: fnstsw  ax
0x4AD4D3: test    ah, 44h
0x4AD4D6: jp      loc_4AD178
0x4AD4DC: fld     dword ptr [edi+0C8h]
0x4AD4E2: fld     dword ptr [esi+0C8h]
0x4AD4E8: fucompp
0x4AD4EA: fnstsw  ax
0x4AD4EC: test    ah, 44h
0x4AD4EF: jp      loc_4AD178
0x4AD4F5: fld     dword ptr [edi+0CCh]
0x4AD4FB: fld     dword ptr [esi+0CCh]
0x4AD501: fucompp
0x4AD503: fnstsw  ax
0x4AD505: test    ah, 44h
0x4AD508: jp      loc_4AD178
0x4AD50E: fld     dword ptr [edi+0D0h]
0x4AD514: fld     dword ptr [esi+0D0h]
0x4AD51A: fucompp
0x4AD51C: fnstsw  ax
0x4AD51E: test    ah, 44h
0x4AD521: jp      loc_4AD178
0x4AD527: mov     eax, [edi+0D4h]
0x4AD52D: cmp     eax, [esi+0D4h]
0x4AD533: jnz     loc_4AD178
0x4AD539: mov     ecx, [edi+0D8h]
0x4AD53F: cmp     ecx, [esi+0D8h]
0x4AD545: jnz     loc_4AD178
0x4AD54B: mov     edx, [edi+0DCh]
0x4AD551: cmp     edx, [esi+0DCh]
0x4AD557: jnz     loc_4AD178
0x4AD55D: fld     dword ptr [edi+0E0h]
0x4AD563: fld     dword ptr [esi+0E0h]
0x4AD569: fucompp
0x4AD56B: fnstsw  ax
0x4AD56D: test    ah, 44h
0x4AD570: jp      loc_4AD178
0x4AD576: fld     dword ptr [edi+0E4h]
0x4AD57C: fld     dword ptr [esi+0E4h]
0x4AD582: fucompp
0x4AD584: fnstsw  ax
0x4AD586: test    ah, 44h
0x4AD589: jp      loc_4AD178
0x4AD58F: fld     dword ptr [edi+0E8h]
0x4AD595: fld     dword ptr [esi+0E8h]
0x4AD59B: fucompp
0x4AD59D: fnstsw  ax
0x4AD59F: test    ah, 44h
0x4AD5A2: jp      loc_4AD178
0x4AD5A8: fld     dword ptr [edi+0ECh]
0x4AD5AE: fld     dword ptr [esi+0ECh]
0x4AD5B4: fucompp
0x4AD5B6: fnstsw  ax
0x4AD5B8: test    ah, 44h
0x4AD5BB: jp      loc_4AD178
0x4AD5C1: fld     dword ptr [edi+0F0h]
0x4AD5C7: fld     dword ptr [esi+0F0h]
0x4AD5CD: fucompp
0x4AD5CF: fnstsw  ax
0x4AD5D1: test    ah, 44h
0x4AD5D4: jp      loc_4AD178
0x4AD5DA: fld     dword ptr [edi+0F4h]
0x4AD5E0: fld     dword ptr [esi+0F4h]
0x4AD5E6: fucompp
0x4AD5E8: fnstsw  ax
0x4AD5EA: test    ah, 44h
0x4AD5ED: jp      loc_4AD178
0x4AD5F3: mov     al, [edi+18h]
0x4AD5F6: mov     cl, [esi+18h]
0x4AD5F9: mov     dl, al
0x4AD5FB: xor     dl, cl
0x4AD5FD: test    dl, 1
0x4AD600: jnz     loc_4AD178
0x4AD606: mov     dl, al
0x4AD608: xor     dl, cl
0x4AD60A: test    dl, 8
0x4AD60D: jnz     loc_4AD178
0x4AD613: mov     dl, al
0x4AD615: xor     dl, cl
0x4AD617: test    dl, 10h
0x4AD61A: jnz     loc_4AD178
0x4AD620: xor     al, cl
0x4AD622: shr     al, 5
0x4AD625: pop     edi
0x4AD626: and     al, 1
0x4AD628: pop     esi
0x4AD629: add     esp, 18h
0x4AD62C: retn    4
