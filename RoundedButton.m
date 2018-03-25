//
//  RoundedButton.m

#import "RoundedButton.h"

@implementation RoundedButton

- (void) layoutSubviews {
    [super layoutSubviews];
    self.layer.cornerRadius = self.bounds.size.height/2;
}

@end
