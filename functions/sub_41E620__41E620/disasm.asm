0x41E620: push    34h ; '4'; Returns ExtraAnim (type 0x34). Confirmed by Actor_SetupAnimationData consumer and ExtraDataList_SetAnimation ownership behavior.
0x41E622: call    BaseExtraList_GetExtraData
0x41E627: retn
