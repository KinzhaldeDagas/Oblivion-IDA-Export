0x9805AF: push    44h ; 'D'
0x9805B1: mov     eax, offset loc_9D7C1E
0x9805B6: call    __EH_prolog3
0x9805BB: push    offset aInvalidStringP
0x9805C0: lea     ecx, [ebp+var_28]
0x9805C3: call    sub_414750
0x9805C8: and     [ebp+var_4], 0
0x9805CC: lea     eax, [ebp+var_28]
0x9805CF: push    eax
0x9805D0: lea     ecx, [ebp+var_50]
0x9805D3: call    sub_4146E0
0x9805D8: push    offset __TI3?AVout_of_range@std@@; throw info for 'class std::out_of_range'
0x9805DD: lea     eax, [ebp+var_50]
0x9805E0: push    eax
0x9805E1: mov     [ebp+var_50], offset ??_7out_of_range@std@@6B@
0x9805E8: call    ThrowException??
