struct OB_SIdvBranchVertex_010201A0
{
float direction[3]; ///< Three floats; constructor zeros.
float position[3]; ///< Three floats.
float radius; ///< Consumed by cross-section and volume helpers.
float transform3x3[9]; ///< 3x3 transform; constructor initializes identity diagonal at +0x1C,+0x2C,+0x3C.
float runningLength; ///< Used by child placement helper 0x78F720.
float primaryWindWeight; ///< Only stock wind-weight slot; no secondary wind field exists in 0x48 stride.
};
