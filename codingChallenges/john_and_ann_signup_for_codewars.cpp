using namespace std;
vector<long long> j;
vector<long long> a;
class Johnann
{
public:
    static void generateVectors(long long n){
      j.clear();
      a.clear();
      j.push_back(0);
      a.push_back(1);
      for(long long i=1;i<n;i++){
        j.push_back(i-a[j[i-1]]);
        a.push_back(i-j[a[i-1]]);
      }
    }
  
    static vector<long long> john(long long n){
      generateVectors(n);
      return j;
    };
    static vector<long long> ann(long long n){
      generateVectors(n);
      return a;
    };
    static long long sumJohn(long long n){
      generateVectors(n);
      long long sum =0;
      for(int i=0;i<n;i++){
        sum+=j[i];
      }
      return sum;
    };
    static long long sumAnn(long long n){
      generateVectors(n);
      long long sum =0;
      for(int i=0;i<n;i++){
        sum+=a[i];
      }
      return sum;
    };
};
